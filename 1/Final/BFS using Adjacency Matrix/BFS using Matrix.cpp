#include<bits/stdc++.h>
using namespace std;

void printMatrix(int **M, int n){
// print
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<M[i][j]<<" ";
    }
    cout<<endl;
}
}


void BFS(int **adj, int s, int n){

    queue<int> Q;

    int *dist = new int[n];
    int *visited = new int[n];

    for(int i=0;i<n;i++){
        dist[i]=0;
        visited[i]=0;
    }
    Q.push(s);
    visited[s]=1;

    while(!Q.empty()){
        int u= Q.front();
        Q.pop();
        cout<<u<<" ";
        for(int i=0;i<n;i++){
            if(adj[u][i]==1){
                int neibour=i;
                    if(visited[neibour]==0){
                    visited[neibour]=1;
                    Q.push(neibour);
                    dist[neibour]=dist[u]+1;
                }
            }

        }

    }
        cout<<"\nDistant from "<<s<<" to \n";
        for(int i=0;i<n;i++){
                cout<<i<<" : ";
            cout<<dist[i]<<endl;
    }

}


int main(){

int n,m;
ifstream fin("ug.txt");
fin>>n>>m;

// Take dynamic 2d array
int **M = new int*[n];
for(int i=0;i<n;i++){
    M[i]= new int[n];
}

//assign zero in array
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        M[i][j]=0;
    }

}


int u,v;

for(int i=0;i<m;i++){
    fin>>u>>v;
    M[u][v]=1;
    M[v][u]=1;
}

printMatrix(M,n);
BFS(M,0,n);

return 0;
}
