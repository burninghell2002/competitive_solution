/* problem :  https://www.codechef.com/MAY20B/problems/CORUS*/


#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        
       int alphabet[26]  = {0};
            for (int i = 0;i<n; i++) 
              alphabet[str[i] - 'a']++;
            
        while(q--)
        {  
            
              
            long int c;
            cin>>c;
            int sum = 0;
            for(int i=0;i<26;i++)
            {
                if(alphabet[i] > c)
                {
                sum = sum + alphabet[i] - c;
                }
            }
            cout<<sum<<endl;
            
        }

  
    }
    return 0;
    }
       

