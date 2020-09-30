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
        long long ans =0;
        for (int j = 31; j>=0; j--)
        {
            long long c =0;
            for (int i = 0; i < n; ++i)
            {
                if(a[i]>=(1<<j)&&a[i]<(1<<(j+1))){
                    c++;
                }
            }
            ans += c*(c-1)/2;
        }
        cout<<ans<<endl;
    }
}
