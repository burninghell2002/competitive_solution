/* problem : https://www.codechef.com/COOK117B/problems/LIFTME*/

#include <iostream>
#include<math.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,q;
	    cin>>n>>q;
	    ll ans = 0;
	    ll of,od;
	    for(ll i=0;i<q;i++)
	    {
	        ll f,d;
	        cin>>f>>d;
	        if(i==0)
	        ans +=abs(d-f)+f;
	       else{
            
           ans += abs(od - f) + abs(d-f);
                
            }
            od = d;
	    }
	        
	        
	   cout<<ans<<endl;
	    
	}
	return 0;
}
