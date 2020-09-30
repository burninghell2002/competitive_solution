/* problem : https://www.codechef.com/JUNE20B/problems/EVENM*/

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
     ll n;
     cin>>n;

     int a[n+1][n+1] = {0};
     int ctr = 1;
     for(int i=1;i<=n;i++)
     {
        if(i%2 != 0){
            for(int j=1;j<=n;j++)
            {
                a[i][j] = ctr;
                ctr++;
            }
        }
        else{
            for(int j=n;j>=1;j--)
            {
                a[i][j] = ctr;
                ctr++;
            }
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
}

return 0;

}