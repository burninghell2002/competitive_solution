/* problem : https://www.codechef.com/JULY20B/problems/CRDGAME */

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
        ll resa1 = 0,resb1 = 0;

        for(ll i=0;i<n;i++)
        {
            ll a;
            ll b;
            cin>>a>>b;


            ll power_a = 0,power_b = 0;
            ll c = 0;
            while(a!=0)
            {   
                c = a%10;
                power_a = power_a + c;
                a = a/10;                
            } 
            while(b!=0)
            {   
                c = b%10;
                power_b = power_b + c;
                b = b/10;                
            } 

            
            if(power_a>power_b)
                resa1++;
            else if(power_b > power_a)
                resb1++;
            else{
                resb1++;
                resa1++;
            }
            
           


        }
       if(resa1 > resb1)
            cout<<"0"<<" "<<resa1;
        else if(resa1 < resb1)
            cout<<"1"<<" "<<resb1;
        else
            cout<<"2"<<" "<<resa1;
        cout<<endl;
    }

    return 0;
}
