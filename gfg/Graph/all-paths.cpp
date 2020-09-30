#include<bits/stdc++.h>
using namespace std;

bool notVisited(vector<int> path, int v){
    vector<int>:: iterator i;
    for(i = path.begin();i!= path.end();i++){
        if(*i==v){
            return 0;
        }
    }
    return 1;
}

void printPath(vector<int> path){
    vector<int>:: iterator i;
    for(i = path.begin();i!= path.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}


void findpaths(vector<vector<int>> g, int s, int d, int v){
    std::queue<vector<int>> q;
    std::vector<int> path;
    path.push_back(s);
    q.push(path);
    while(!q.empty()){
        path = q.front();
        q.pop();
        int last = path[path.size()-1];
        if(last == d){
            printPath(path);
        }
        for(int i =0;i<g[last].size();i++){
            if(notVisited(path,g[last][i])){
                std::vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }


}

int main()
{
    vector<vector<int> > g;
    // number of vertices
    int v = 4;
    g.resize(4);

    // construct a graph
    g[0].push_back(3);
    g[0].push_back(1);
    g[0].push_back(2);
    g[1].push_back(3);
    g[2].push_back(0);
    g[2].push_back(1);

    int src = 2, dst = 3;
    cout << "path from src " << src
         << " to dst " << dst << " are \n";

    // function for finding the paths
    findpaths(g, src, dst, v);

    return 0;
}
