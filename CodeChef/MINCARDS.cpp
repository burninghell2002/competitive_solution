/* problem : https://www.codechef.com/COTH2020/problems/MINCARDS*/

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
 
 ll n;
 cin>>n;

 string s;
 cin>>s;
int ans= 0;
 for(int i=1;i<s.size();i++)
 {
    if(s[i] == s[i-1])
        ans++;

 }
 cout<<ans<<endl;


return 0;
}

