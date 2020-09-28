/*problem statement : https://www.codechef.com/problems/FLOW006 */


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    long int n;
    int mod;
    int sum=0;
    
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        sum=0;
        while(n!=0)
        {
        mod = n%10;
        sum=sum+mod;
        n=n/10;
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
