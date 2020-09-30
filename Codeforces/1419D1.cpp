#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(auto &x:a){
        cin>>x;
    }
    sort(a, a+n);
    int ans =0;
    if(n>2){
        if(n%2==0){
            for(int i =0;i+2<n;i+=2){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                ans++;
            }
        }
        else{
            for(int i =0;i+1<n;i+=2){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    for(auto x: a){
        cout<<x<<" ";
    }
    return 0;
}
