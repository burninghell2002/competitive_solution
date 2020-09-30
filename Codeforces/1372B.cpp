#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            int a=0;
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    a = n/i;
                    break;
                }
            }
            if(a==0){
                cout<<1<<" "<<n-1<<endl;
            }
            else{
                cout<<a<<" "<<n-a<<endl;
            }
        }
    }
}
