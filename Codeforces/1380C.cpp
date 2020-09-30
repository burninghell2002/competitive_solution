#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        int c =1;
        int ans =0;
        for (int i = 0; i < n; ++i)
        {
            if(a[i]*c>=x){
                ans += 1;
                c =0;
            }
            c++;

        }
        cout<<ans<<endl;


    }
    return 0;
}
