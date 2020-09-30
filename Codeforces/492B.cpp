#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int d = max(a[0]-0, l-a[n-1])*2;
    for(int i=0;i<n-1;i++){
        int temp = (a[i+1]-a[i]);
        if(temp>=d){
            d = temp;
        }
    }
    cout.precision(10);
    cout<<fixed<<(d/2.0)<<endl;
    return 0;
}
