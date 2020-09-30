#include<bits/stdc++.h>
using namespace std;
 int dp[4001] ={INT_MIN};
 int a,b,c;

 int main(){
     int n, a[3];
     cin>>n>>a[0]>>a[1]>>a[2];
     sort(a,a+3);
     dp[0] =0;
     for(int i=0;i<n+1;i++){
         for(int j=0;j<3;j++){
             if(i - a[j]>=0){
                 dp[i] = max(dp[i],dp[i-a[j]]);
             }
         }
         dp[i] += 1;
     }
     cout<<dp[n]<<endl;
     return 0;
 }
