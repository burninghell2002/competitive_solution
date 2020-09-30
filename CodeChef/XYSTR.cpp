/* problem : https://www.codechef.com/JUNE20B/problems/XYSTR*/



#include <bits/stdc++.h>
#include<numeric>
#include<math.h>
#include<cstring>
#include<algorithm>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
  

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll z = 0;
        ll ctr = 0,ctr1 = 0;
       
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='x' && s[i+1]=='y' || s[i]=='y' && s[i+1]=='x')
                {
                    i++;
                    ctr++;
                }

            }
            for(ll i=0;i<s.size();i++)
            {
                if(s[i] == 'y')
                {
                    z = i;
                    break;

                }
            }
                for(ll i=z;i<s.size();i++)
                {
                    if(s[i]=='y' && s[i+1]=='x')
                    {
                        i++;
                        ctr1++;
                    }

                }
                cout<<max(ctr,ctr1)<<endl;
         
  
}
            return 0;
        }