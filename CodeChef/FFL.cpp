/* problem : https://www.codechef.com/LTIME83B/problems/FFL*/

#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int s;
        cin>>n;
        cin>>s;
       
        int p[n] = {0};
        int z[n] = {0};
        int d[n] = {0};
        int f[n] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>p[i];

        }
        for(int i=0;i<n;i++)
        {
            cin>>z[i];
                 
        }
        int k=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(z[i] == 0)
            {
            d[k] = p[i];
            k++;
            }
            else 
            {
            f[l] = p[i];
            l++;
            }
                 
        }
        int h=0;
        int v;
        v = 100 - s;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<l;j++)
            {
               if( d[i] + f[j] <= v)
               {
               cout<<"yes"<<endl;
               h++;
               break;
                }
            }
            if(h!=0)
            break;
        }
        if(h==0)
        cout<<"no"<<endl;

        
       
    }
    return 0;
}
