#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	for(long g=0;g<t;g++){
	   long h,p;

	cin>>h;cin>>p;
	while(h>0&&p>0){
	    h-=p;
	    p/=2;
	}
	if(h>0) cout<<"0"<<endl;
	else cout<<"1"<<endl;
	}
	return 0;
}
