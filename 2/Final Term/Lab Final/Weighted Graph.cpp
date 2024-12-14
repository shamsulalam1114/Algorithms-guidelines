
#include<bits/stdc++.h>
using namespace std;

void printGraph(int **g, int n){
    //print adjaceny matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
}
}

void findMaxEdges(int **g, int n){
    int mymax=g[0][0];
    int u,v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mymax<g[i][j]){
                mymax=g[i][j];
                u=i;v=j;
            }
        }

}
cout<<u<<" "<<v<<" "<<mymax<<endl;
}



int main(){

ifstream fin("weighted_graph.txt");

int n,m;
//cin>>n>>m;
fin>>n>>m;


//dynamic 2d array
int **g= new int*[n];
for(int i=0;i<n;i++){
    g[i]= new int[n];
}
// make zero
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        g[i][j]=0;
    }
}

// input edges
int u,v,w;
for(int i=0;i<m;i++){
    fin>>u>>v>>w;
    g[u][v]=g[v][u]=w;// for undirected graph
    //g[u][v]=1;// for directed graph
}

printGraph(g,n);
findMaxEdges(g,n);
return 0;
}

