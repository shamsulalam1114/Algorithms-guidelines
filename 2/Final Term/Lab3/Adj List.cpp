#include<bits/stdc++.h>
using namespace std;

#define max_n 100

int main(){

    int n,m;
    cin>>n>>m;

    vector<int> adjList[max_n];
    vector<int> *adjList= new vector<int>[n];

    int u,v;
    for(int i=0;i<m;i++){
            cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

        for(int i=0;i<n;i++){
            cout<<i<<"--->";
            for(int j=0;j<<adjList[i].size();j++){
                cout<<adjList[i][j]<<" ";
            }
            cout<<"\n";
    }




return 0;
}
