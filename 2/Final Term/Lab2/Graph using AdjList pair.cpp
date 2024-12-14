#include<bits/stdc++.h>
using namespace std;


int main(){

    int V;
    int E;
    cin>>V>>E;

vector<pair<int,int>> *adj= new vector<pair<int,int>>[V];

int u,v,w;
for(int i=0;i<E;i++){
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(v,w));
    //adj[v].push_back(u);
}

vector<pair<int,int>>::iterator it;

for(int i=0;i<V;i++){
        cout<<i<<"->";
        for( it=adj[i].begin(); it!=adj[i].end(); it++){
            cout<<"("<<it->first<<", "<<it->second<<") ";
        }
        cout<<endl;
}

return 0;
}

