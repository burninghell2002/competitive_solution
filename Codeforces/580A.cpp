#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[n];
    dp[0] =1;
    int m =1;
    for(int i=1;i<n;i++){
        if(a[i]>= a[i-1]){
            dp[i] = 1+ dp[i-1];
            m = max(dp[i],m);
        }
        else{
            dp[i] = 1;
        }
    }
    cout<<m<<endl;
    return 0;

}
