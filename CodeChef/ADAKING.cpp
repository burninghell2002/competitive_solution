/* problem : https://www.codechef.com/JULY20B/problems/ADAKING*/

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
        int k;
        cin>>k;

    char a[8][8] ;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            a[i][j] = 'X';
        }
    }

    
    int ctr = 0;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(ctr < k)
            a[i][j]='.';
        else
            break;
        ctr++;
        }
    }
    a[0][0] = 'O';
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    } 

    }

    return 0;
}