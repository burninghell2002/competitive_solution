/* problem : https://www.codechef.com/JUNE20B/problems/EOEO*/


#include <bits/stdc++.h>
#include<numeric>
#include<math.h>
#include<cstring>
#include<algorithm>
#include <string.h>
usingd namespace std;
#define ll long long
void calc(ll ts)
{
    if(ts == 1)
    {
        cout<<"0"<<endl;
        return;
    }
    if(ts%2 == 0)
        calc(ts/2);
    if(ts %2 != 0)
    {
        ll even;
        even = ((ts-2)/2) + 1;
        cout<<even<<endl;
        return;
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll ts;
        cin>>ts;
        
        calc(ts);
        }

        return 0;

    }