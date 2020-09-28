/* problem : https://www.codechef.com/AUG20B/problems/LINCHESS*/

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
    	ll n,k;
    	cin>>n>>k;
    	ll p[n] = {0};
    	ll p1[n] = {0}; 
    	for(int i=0;i<n;i++)
    	{
    		cin>>p[i];
    		p1[i] = p[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		if(p[i] < k && k%p[i] == 0)
    		{
    			p[i] = (k/p[i]) - 1;   		 	

    		}
    		else{
    			p[i] = INT_MAX;
    		}
    		
    	}
    	int min;
    	min = 99999999;
    	int index;
    	for(int i=0;i<n;i++)
    	{
    		if(p[i]<min)
    		{
    			min=p[i];
    			index = i;
    		}
    	}
    	if(min == 99999999)
    	cout<<"-1"<<endl;
    	else
    	cout<<p1[index]<<endl;	

    		

    		
    
    }
   
    return 0;
}