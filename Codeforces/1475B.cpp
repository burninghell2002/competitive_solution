include <iostream>
using namespace std;
 
#define debug(x) cout<<"D:"<<x<<"\n";
 
int main() {
	// your code goes here
	
	long long n;
	cin>>n;
	long long x;
	int multi,fact;
	while(n--){
	    cin>>x;
	    if(x<2020){
	        cout<<"NO"<<"\n";
	       // debug(x);
	    }else{
	        multi=x/2020;
	        int op=(multi*2020);
	        fact=x-op;
	        
	        if(fact>x){cout<<"NO"<<"\n";}
	        else{
	           // debug(fact);
	           //debug(multi);
	               // debug(fact);
	            if(fact>multi){
	                cout<<"NO"<<"\n";
	            }
	            else{
	                cout<<"YES"<<"\n";
	                
	            }
	        }
	    }
	}
	
	return 0;
}
