#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
        ans[i] = 2*10e6;
    }
    ans[k-1]=0;
    while(m--){
        int x;
        int y;
        cin>>x>>y;
        int ix = ans[x];
        int iy = ans[y];
        ans[x] = min(ix+1, iy);
        ans[y] = min(iy+1, ix);
    }
    for(auto x:ans){
        cout<<((x==2*10e6)?-1:x)<<" ";
    }
    cout<<endl;
}
