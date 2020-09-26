/*Link to the question: https://www.codechef.com/MAY20B/problems/COVID19
*/

#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
           int n;
           cin>>n;
           
           int x[n];
           memset(x,0,sizeof(x));
           for(int i=0;i<n;i++)
           cin>>x[i];
       int ctr = 1;
       int k = 0;
       int counter[n];
       for(int i=0;i<n;i++)
       counter[i] = -1;
       
       for(int i=0;i<n;i++)
       { 
          if(abs(x[i]-x[i+1]) <= 2)
          {
            ctr++;
        }
          else
          {

            counter[k] = ctr;
            ctr = 1;
            k++;
           }  
       
       }
       int z;
       z = sizeof(counter)/sizeof(counter[0]);
       int min ;
       min = counter[0];
       for(int i=1;i<n;i++)
       {
        if((counter[i]<min)&&(counter[i]!=-1))
            min = counter[i];
       }

       int max = *max_element(counter,counter+z);
       cout<<min<<" "<<max<<endl;
}
    return 0;
       
}
