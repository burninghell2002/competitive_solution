#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], l[n];
        vector<int> d;
        for(auto &x:a){
            cin>>x;
        }
        for(int i=0;i<n;i++){
            cin>>l[i];
            if(l[i]==0){
                d.push_back(a[i]);
            }
        }
        vector<int>::iterator j;
        sort(d.begin(),d.end());
        reverse(d.begin(), d.end());
        j = d.begin();
        for(int i =0;i<n;i++){
            if(l[i]==0){
                a[i]= *j;
                j++;
            }
        }
        for(int &x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
