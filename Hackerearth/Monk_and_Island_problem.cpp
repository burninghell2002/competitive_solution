/* Monk and the Islands  (Graph Problem)
Problem Link -   https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
vector<int> adj[10001];
int v[10001];
int d[10001];
 
void bfs(int s , int dis){
	queue<int>q;
	q.push(s);
	v[s] =  1 ;
	d[s] = dis ;
 
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		for(int x : adj[curr]){
			if(v[x] != 1){
				q.push(x);
				v[x] = 1 ;	
				d[x] = d[curr] + 1 ;
			}
		}
	}
}
 
int main(){
 
	int t ;
	cin>>t;
	while(t--){
		int n , m ;
		cin >> n >> m ;
 
		for(int i = 1 ; i<= n ; i++){
			adj[i].clear();
			v[i] = 0 ;
			d[i] = 0 ;
		}
 
		for(int i = 1 ; i <= m ; i++){
			int s , t ;
			cin >> s >> t ;
			adj[s].push_back(t);
			adj[t].push_back(s);
		}
 
		bfs(1 , 0);
		cout<<d[n]<<endl;
 
	}
   
 
	return 0 ;
}
