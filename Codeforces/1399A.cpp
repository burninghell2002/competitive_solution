#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool ans = true;
        for(int i=1;i<n-1;i++){
            if(abs(a[i] - a[i+1])>1){
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
