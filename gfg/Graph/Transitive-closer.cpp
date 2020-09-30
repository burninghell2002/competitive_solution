#include<bits/stdc++.h>
#include<vector>
#include<list>
using namespace std;

class Graph
{
    int V;
    std::list<int> *adj;
    void DFSUtil(int u,int v);
public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V];
        tc = new bool* [V];
        for (int i=0; i<V; i++) {
            tc[i] = new bool[V];
            memset(tc[i], false, V*sizeof(bool));
        }
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
    }
    void Transitive_closure();
};

void Graph::DFSUtil(int u, int v){
    tc[u][v] = true;
    list<int>::iterator i;
    for(i = adj[v].begin(), i != adj[v].end();i++){
        if(tc[u][*i]==false){
            DFSUtil(u,*i );
        }
    }
}

void Graph::Transitive_closure(){
    for(int i =0;i<V;i++){
        tc[i][i] = true;
        DFSUtil(i,i);
    }

    for (int i=0; i<V; i++)
    {
        for (int j=0; j<V; j++)
            cout << tc[i][j] << " ";
        cout << endl;
    }
}
int main( ){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Transitive closure matrix is \n";
    g.transitiveClosure();

    return 0;
}
