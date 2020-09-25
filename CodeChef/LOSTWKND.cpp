/*Link: https://www.codechef.com/LTIME84B/problems/LOSTWKND*/
#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int a[5] = {0};
        for(int i=0;i<5;i++)
            cin>>a[i];

        int p;
        cin>>p;
        for(int i=0;i<5;++i)
        {
            a[i] = a[i]*p;
        }
        int sum = 0;
        int sum1 = accumulate(a,a+5,sum);
        int a1;
        a1 = sum1 - 120;
        if(a1 > 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

   }
    return 0;
}
