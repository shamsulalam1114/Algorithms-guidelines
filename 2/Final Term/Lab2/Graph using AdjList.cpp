#include<bits/stdc++.h>

using namespace std;


class Graph
{
    int V;
    vector<int> *adj;
public:

    Graph(int V)
        {
            this->V = V;
            adj = new vector<int>[V];
        }


        void addEdge(int u, int v)
        {

            adj[u].push_back(v);
        }

        void printGraph()
        {

            for(int i=0; i<V; i++)
            {
               // list<int>::iterator j;
                cout<<i<<"->";
                for (int j = 0; j<adj[i].size(); j++)
                {
                    cout<<adj[i][j]<<" ";

                }
                cout<<endl;
            }
        }


    };

    /*
    void Graph::DFS_visit(int v, bool visited[])
    {

        visited[v] = true;
        cout << v << " ";
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end();i++)
            {
                if (!visited[*i])
                DFS_visit(*i, visited);
            }
    }


    void Graph::DFS(int v)
    {
        // Mark all the vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;


      DFS_visit(v, visited);
    }
    */
    int main()
    {
        Graph g(4);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        g.printGraph();

        return 0;
    }
