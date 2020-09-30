#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int b[n];
    for(auto &x : b){
        cin>>x;
    }
    cin>>m;
    int g[m];
    for(auto &x : g){
        cin>>x;
    }
    int i=0,j=0,p=0;
    sort(b, b+n);
    sort(g,g+m);
    while(j<m){
        for(i=0;i<n;i++){
            if(abs(b[i]-g[j])<=1){
                b[i] =102;
                p++;
                break;
            }
        }
        j++;
    }
    cout<<p<<endl;
    return 0;
}
