/* problem : https://www.codechef.com/AUG20B/problems/CHEFWARS*/

#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<numeric>

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
   	ll h,p;
   	cin>>h>>p;
   	while(p)
   	{
   		h = h-p;
   		if(h<0)
   			h=0;
   		p = floor(p/2);
   	}
   	if(h != 0)
   		cout<<"0"<<endl;
   	else
   		cout<<"1"<<endl;
   }
return 0;
}

