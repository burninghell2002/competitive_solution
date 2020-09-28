/* problem : https://www.codechef.com/COPT2020/problems/GRDAY1*/


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
        ll n,x;char lr,he;
        cin>>n>>x;
        cin>>lr>>he;
        char a[n+1];
        if(lr == 'L')
        {
            if(he == 'H')
            {
                for(int i=1;i<=n;i++)
                {
                    if(i%2!=0)
                        a[i] = 'H';
                    else
                        a[i] = 'E';
                }
            }
            else
            {

                for(int i=1;i<=n;i++)
                {
                    if(i%2!=0)
                        a[i] = 'E';
                    else
                        a[i] = 'H';
                }
            }
            cout<<x<<" "<<a[x]<<endl;

        }   
        else
        {
            if(he == 'H')
            {
                for(int i=n;i>=1;i--)
                {
                    if(i%2!=0)
                        a[i] = 'H';
                    else
                        a[i] = 'E';
                }

            }
            else
            {
                for(int i=n;i>=1;i--)
                {
                    if(i%2!=0)
                        a[i] = 'E';
                    else
                        a[i] = 'H';
                }
                
            }

            cout<<n-x + 1<<" "<<a[n-x+1]<<endl;
          
        } 



    }
    return 0;

}