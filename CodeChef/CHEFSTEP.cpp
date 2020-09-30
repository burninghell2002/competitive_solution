/* problem : https://www.codechef.com/LTIME86B/problems/CHEFSTEP*/

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
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	int d[n] = {0};
    	for(int i=0;i<n;++i)
    	{
    		cin>>d[i];
    		if(d[i]%k==0)
    			d[i]=1;
    		else
    			d[i] = 0;
    	}
    	for(int i=0;i<n;i++)
    		cout<<d[i];
    	cout<<endl;
    }
    
    return 0;
}