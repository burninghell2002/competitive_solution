#include<bits/stdc++.h>
#include<list>
using namespace std;

class Graph{
    int V;
    std::list<int> *adj;
    void DFSUtil(int v, vector<bool> &visited);
public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int u, int v){
        adj[u].push_back(v);
    }
    int findMother();

};
void Graph::DFSUtil(int v, vector<bool> &visited ){
    visited[v] = true;

    list<int>::iterator i;
    for(i = adj[v].begin(); i!=adj[v].end();i++){
        if(!visited[*i]){
            DFSUtil(*i,visited);
        }
    }

}
int Graph::findMother(){
    std::vector<bool> visited(V,false);
    int v;
    for(int i=0; i<V;i++){
        if(!visited[i]){
            DFSUtil(i,visited);
            v = i;
        }
    }
    fill(visited.begin(), visited.end(), false);
    DFSUtil(v, visited);
    for (int i=0; i<V; i++)
        if (visited[i] == false)
            return -1;

    return v;

}

int main(){
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(4, 1);
    g.addEdge(6, 4);
    g.addEdge(5, 6);
    g.addEdge(5, 2);
    g.addEdge(6, 0);

    cout << "A mother vertex is " << g.findMother();

    return 0;
}
