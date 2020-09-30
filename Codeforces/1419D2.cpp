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
                int j;
                for(j =i+1;j<n-1;j++){
                    if(a[j]!=a[i]){
                        break;
                    }
                }
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                ans++;
            }
        }
        else{
            for(int i =0;i+1<n;i+=2){
                int j;
                for(j =i+1;j<n-1;j++){
                    if(a[j]!=a[i]){
                        break;
                    }
                }
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
