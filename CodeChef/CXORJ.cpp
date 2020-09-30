/*
problem : https://www.codechef.com/CMYC2020/problems/CXORJ
*/
#include <bits/stdc++.h>
#include<numeric>
#include<math.h>
#include<cstring>
#include<algorithm>
#include <string.h>
using namespace std;
#define ll long long

int main()
{
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int a[1000000] = {0};
    int k = 0;
    while(t--)
    {
     
     string s;
     cin>>s;
     int count[26] = {0};
     int count1[26] = {0};
     for(int i=0;i<s.size();i++)
     {
        if(islower(s[i]))
            count[s[i]- 'a']++;
        else
            count1[s[i]-'A']++;
     }
     int sum = 0;
     int sum1 = accumulate(count,count+26,sum);

     int sum2 = accumulate(count1,count1+26,sum);
     
     int x = abs(sum1 - sum2);
     a[k] = x;
     k++;


}
int sum = 0;
cout<<accumulate(a,a+1000000,sum);


return 0;

}