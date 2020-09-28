/* problem : https://www.codechef.com/JULY20B/problems/CHEFSTR1*/
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
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll s[n] = {0};
        for(ll i=0;i<n;i++)
            cin>>s[i];
        
        ll cdif[n] = {0};
        for(ll i=0;i<n-1;i++)
            cdif[i]  = abs(s[i+1] - s[i]) - 1 ;

       ll sum = 0;
       for(ll i=0;i<n;i++)
        sum = sum + cdif[i];

    cout<<sum<<endl;
    }

    return 0;
}