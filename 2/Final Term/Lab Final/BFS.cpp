#include<bits/stdc++.h>
using namespace std;


void printAdjList(vector<int> * adjList, int n){
    for(int i=0;i<n;i++){
        cout<<i<<"--->";
        for(int j=0;j<adjList[i].size();j++){
            cout<<adjList[i][j]<<", ";
        }
        cout<<"\n";
    }
}

void BFS(vector<int> * adjList, int n, int s){

    queue<int> q;
    int * visited = new int[n];
    int * distance = new int[n];

    for(int i=0;i<n;i++){
        visited[i]=distance[i]=0;
    }
    q.push(s);
    visited[s]=1;
    distance[s]=0;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(int i=0;i<adjList[v].size();i++){
            int neibor = adjList[v][i];
            if(visited[neibor]==0){
                q.push(neibor);
                visited[neibor]=1;
                distance[neibor]=distance[v]+1;
            }
        }
    }
    cout<<"\n";

    cout<<"Distance from source "<<s<<" :"<<endl;

    for(int i=0;i<n;i++){
        cout<<i<<" : "<<distance[i]<<endl;
    }

}


int main(){


    ifstream fin("undirected_graph.txt");
    int n,m;
    fin>>n>>m;

    vector<int> * adjList = new vector<int>[n];

    int u,v;

    for(int i=0;i<m;i++){
        fin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    printAdjList(adjList,n);
    BFS(adjList,n,0);

}
