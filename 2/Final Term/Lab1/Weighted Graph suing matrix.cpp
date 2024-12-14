#include<bits/stdc++.h>
using namespace std;


int main(){

//ifstream fin("g1.txt");

int n,m;
cin>>n>>m;
//fin>>n>>m;


//dynamic 2d array
int **g= new int*[n];
for(int i=0;i<n;i++){
    g[i]= new int[n];
}
// make zero
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        g[i][j]=999;
    }
}

// input edges
int u,v,w;
for(int i=0;i<m;i++){
    cin>>u>>v>>w;
    g[u][v]=g[v][u]=w;// for undirected graph
    //g[u][v]=1;// for directed graph
}
//print adjaceny matrix
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<g[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}

