/* problem : https://www.codechef.com/COTH2020/problems/SUBALGO */
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
 
 ll n,a;
 cin>>n>>a;
 while(a--)
 {
    if(n % 10 == 0)
        n = n/ 10;
    else
        n = n-1;


 }
 cout<<n<<endl;


return 0;
}

