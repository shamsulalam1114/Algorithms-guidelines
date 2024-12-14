#include<bits/stdc++.h>
using namespace std;

void printGraph(int **g, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}


void findDegree(int **g, int v, int n){
    int indeg=0;
    int outdeg=0;
    for(int i=0;i<n;i++){
        if(g[v][i]==1){
                indeg++;
        }
        if(g[i][v]==1){
                outdeg++;
        }
    }
    cout<<"Indeg:"<<indeg<<endl;
    cout<<"outdeg:"<<outdeg<<endl;
}

void intputEdges(int **g, int m){

// input edges
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        //g[u][v]=g[v][u]=1;// for undirected graph
        g[u][v]=1;// for directed graph
    }
}

int **createZeroMatrix(int n){

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

    return g;
}



int main(){

//ifstream fin("g1.txt");

int n,m;
cin>>n>>m;
//fin>>n>>m;


int **g=createZeroMatrix(n);
intputEdges(g,m);
printGraph(g,n);

findDegree(g,1,n);


return 0;
}
