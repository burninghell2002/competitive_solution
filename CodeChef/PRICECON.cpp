/*Link to the question: https://www.codechef.com/problems/PRICECON
*/

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
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        int p[n] = {0};
        for(int i=0;i<n;i++)
            cin>>p[i];

        int sum = 0;
        int sum1 = accumulate(p,p+n,sum);

        for(ll i=0;i<n;i++)
            if(p[i] > k)
                p[i] = k;

        int sum2 = accumulate(p,p+n,sum);
        cout<<sum1 - sum2<<endl;    
    }

      return 0;

    }

