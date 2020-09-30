/*Link to the question: https://www.codechef.com/problems/INTEST*/
#include<iostream>
using namespace std;
int main(void)
{
    int n,k;
    long long int t;
    int ctr= 0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        
        cin>>t;
        if(t%k==0)
        ctr++;
    }
    cout<<ctr;
    
    
    return 0;
}