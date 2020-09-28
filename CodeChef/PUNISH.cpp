/* problem  : https://www.codechef.com/PCO12020/problems/PUNISH*/


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
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(k <= n)
        {
            cout<<k<<endl;
         
        }
        
        else
        {
           int csum[1000000] ={0}; 
            csum[0] = 1;
            csum[1] = n;
            for(int i=2;i<1000000;i++)
            {
                csum[i] = csum[i-1] + n-1;
            }
            int flag = 0;
            for(int i=1;i<1000000;i++)
            {
                if(k == csum[i] or k > csum[i] and k < csum[i+1])
                {
                    if(i%2 == 0)
                    {
                        cout<<k - csum[i]+1<<endl;
                        flag = 1;
                      
                    }
                    else
                    {
                        cout<<csum[i+1] - k + 1<<endl;
                        flag = 1;
                       
                    }
                }
                if(flag == 1)
                    break;
            }

        

}

    } 
    return 0;
}