#include<bits/stdc++.h>
using namespace std;

int bfs(int x, int y){
    std::vector<bool> v(10002,false);
    v[x] = true;
    std::queue<pair <int,int>> q;     //value,distance
    q.push(x,0);
    while(!q){
        pair <int,int> p = q.front();
        q.pop();
        v[p.first] = true;
        if(p.first==y){
            return(p.second);
        }
        else{
            if(p.first*2==y){
                return(p.second +1);
            }
            else if(p.first*2<y&&v[p.first*2]==false) q.push(p.first*2,p.second+1);
            if(p.first-1==y){
                return(p.second +1);
            }
            else if(p.first-1>0&&v[p.first-1]==false) q.push(p.first-1,p.second+1);
        }
    }
    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;
    int c = bfs(n,m);
    cout<<c<<endl;
}
