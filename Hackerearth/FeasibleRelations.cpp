// Problem Link-  https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/


#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

vector<int> adj[1000001];
int v[1000001];
int cc[1000001];
int cc_curr ;


void dfs(int s){
    v[s] = 1 ;
    cc[s] = cc_curr ;
    for(int x : adj[s]){
        if(v[x] != 1){
            dfs(x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;  
    int a, b;
    int n, k;
    string op;
    cin >> t;
    while (t--)
    {
        cc_curr = 0 ;
        cin >> n >> k;

        vector<pair<int, int>> edges;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
            // cc[i] = 0;
            v[i] = 0;
        }

        for (int i = 1; i <= k; i++)
        {

            cin >> a >> op >> b;
            if (op == "=")
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
            else
            {
                edges.push_back({a, b});
            }
        }
       for(int i = 1 ; i <= n ; i++){
           if(v[i] != 1){
               cc_curr ++ ;
               dfs(i);
           }
       }
        bool flag = true;

        for (int i = 0; i < edges.size(); i++)
        {
            a = edges[i].first ;
            b = edges[i].second ;

            if(cc[a] == cc[b]){
                flag = false ;
                break ;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}