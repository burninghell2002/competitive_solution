/* problem : https://www.codechef.com/PCO12020/problems/MORECAKE*/


#include <bits/stdc++.h>
#include<numeric>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    ll sum = 0;
      ll sum1 = 0;
    while(t--)
    {
        ll s,n,k,r;
        cin>>s>>n>>k>>r;
        ll ans = 0;
        
        for(int i=0;i<n;i++)
        {
            ans = ans + pow(r,i);
        }
      ans = ans * k;
      
      if(ans >= s)
      {
        cout<<"IMPOSSIBLE "<<ans-s<<endl;
        sum = sum + ans - s;
    }
    else
    {
        cout<<"POSSIBLE "<<s-ans<<endl;
        sum1 = sum1 - ans + s;
    }

        
    } 
    if(sum < sum1 )
        cout<<"POSSIBLE"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;  
    return 0;
}
