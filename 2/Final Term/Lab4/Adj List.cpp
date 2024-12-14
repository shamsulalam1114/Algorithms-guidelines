#include<bits/stdc++.h>
using namespace std;

void printList(int n, vector<int> *adj ){
    for(int i=0;i<n;i++){
        cout<<i<<"---->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<", ";
        }
    cout<<"\n";
    }
}

int degree(vector<int> *adj, int u){
    return adj[u].size();
}

vector<int> * transpose(vector<int> *adj,int n){
    vector<int> *List = new vector<int>[n];

     for(int i=0;i<n;i++){
        for(int j=0;j<adj[i].size();j++){
            List[adj[i][j]].push_back(i);
        }
    }
    return List;
}

list<int> neighbour(int u, vector<int> *adj){

   list<int> neighbour;

    for(int j=0;j<adj[u].size();j++){
        neighbour.push_back(adj[u][j]);
    }
    return neighbour;
}


#define SIZE 100
int main(){


ifstream fin("dg.txt");

vector<int> adjList[SIZE];
int n,m;
fin>>n>>m;
int u,v;

for(int i=0;i<m;i++){
    fin>>u>>v;
    adjList[u].push_back(v);
    //adjList[v].push_back(u);
}


printList(n,adjList);
cout<<"\nDegree of 1: "<<degree(adjList,1)<<endl;

list<int> l22=neighbour(4,adjList);

for(int numbers:l22){
    cout<<numbers<<" ";
}

vector<int>* l=transpose(adjList,n);
cout<<"\n";
printList(n,l);
return 0;
}
