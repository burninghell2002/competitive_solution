#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long mask =0;
        int n;
        cin>>n;
        std::vector<int> ans;
        for(int i =0;i<2*n;i++){
            int temp;
            cin>>temp;
            if(~mask&(1*1ll<<(temp-1))){
                mask |= 1*1ll<<(temp-1);
                ans.push_back(temp);
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
   return 0;
}
