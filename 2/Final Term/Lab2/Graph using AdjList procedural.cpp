#include<bits/stdc++.h>
using namespace std;


struct node
{
    int val;
    int cost;
};

int main(){

    int V;
    int E;
    cin>>V>>E;

vector<node> *adj= new vector<node>[V];

int u,v,w;
for(int i=0;i<E;i++){
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
    //adj[v].push_back(u);
}


for(int i=0;i<V;i++){
        cout<<i<<"->";
        for( int j=0;j<adj[i].size();j++){
            cout<<"{"<<adj[i][j].val<<", "<<adj[i][j].cost<<"}, ";
        }
        cout<<endl;
}

return 0;
}
