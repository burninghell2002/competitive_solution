/* problem : https://www.codechef.com/LTIME84B/problems/WWALK*/
#include <bits/stdc++.h>
#include<numeric>
#include<math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] = {0};
        int b[n] = {0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];


       int csuma[n] = {0};
        int csumb[n] = {0};
        csuma[0] = a[0];
        for(int i=1;i<n;i++)
        {
            csuma[i] = a[i] + csuma[i-1];
        }
        csumb[0] = b[0];
        for(int i=1;i<n;i++)
        {
            csumb[i] = b[i] + csumb[i-1];
        }
        csumb[-1] = csuma[-1] = {0};
        long int sum = 0;
        for(int i=-1;i<n-1;i++)
        {
            if(csuma[i] == csumb[i] && csuma[i+1] == csumb[i+1] )
                sum = sum + abs(csumb[i] - csumb[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}