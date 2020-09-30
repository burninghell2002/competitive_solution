/* problem : https://www.codechef.com/AUG20B/problems/CRDGAME3*/
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
    	ll pc,pr;
    	cin>>pc>>pr;
    	int a1 = 0,a2=0;
    	a1 = pc/9;
    	a2 = pr/9;
    	if(pc%9!=0)
    		a1++;
    	if(pr%9!=0)
    		a2++;

    	if(a1 < a2)
    		cout<<"0 "<<a1<<endl;
    	else
    		cout<<"1 "<<a2<<endl;
    }
   
    return 0;
}