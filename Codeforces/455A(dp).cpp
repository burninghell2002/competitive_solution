#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
long long occurance[MAXN] ={0};
long long ans[MAXN] ={0};
int main(){
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        occurance[x]++;
    }
    ans[1]=occurance[1];
    for(int i=2;i<MAXN;i++){
        ans[i] = max(ans[i-1],i*occurance[i]+ans[i-2]);
    }
    cout<<ans[MAXN-1]<<endl;
    return 0;
}
