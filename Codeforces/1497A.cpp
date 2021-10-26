#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
#define pb push_back
#define br "\n"
#define bl " "
  
void solve() {
 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {cin>>v[i];}
		sort(v.begin(),v.end());
 
		vector<int>b,c;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]!=v[i+1]) {
				b.pb(v[i]);
			}else{
				c.pb(v[i]);
			}
		}
		for(auto x:c){
			b.pb(x);
		}
 
		for (auto m: b){
			cout<<m<<" ";
		}
		cout<<"\n";
	}
 
}

int main() {
 
	solve();
 
	return 0;
}