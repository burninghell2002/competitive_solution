/* problem : https://www.codechef.com/JUNE20B/problems/CHFICRM */


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
       int a[n] = {0};
       for(int i=0;i<n;i++)
        cin>>a[i];

    int pocket[3] = {0};
    int flag = 0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==5)
        {
            pocket[0] = pocket[0] + 5;

            a[i] = 1;
        }
        else if(a[i]==10)
        {
            pocket[1] = pocket[1] + 10;
            pocket[0] = pocket[0] - 5;
            if(pocket[0] < 0){
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
            a[i] = 1;

        }
        else
        {
            if(pocket[1] != 0)
            {
                pocket[1] = pocket[1] - 10;
                if(pocket[1] < 0)
                {
                    cout<<"NO"<<endl;
                    flag = 1;
                    break;
                } 
                a[i] = 1; 
            }
            else
            {
                pocket[0] = pocket[0] - 10;
                if(pocket[0] < 0)
                {
                    cout<<"NO"<<endl;
                    flag = 1;
                    break;
                } 
                a[i] = 1;

            }            

        }

    }
    if(flag == 0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i] != 1)
            {
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0)
        cout<<"YES"<<endl;





}

return 0;

}