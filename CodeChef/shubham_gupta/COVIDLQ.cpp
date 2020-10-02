#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    string ans="YES";
	    for(int i=0;i<n;i++){
	        int count =1;

	        if(a[i]==0){
	           continue;
	        }
	        for(int j=i+1;j<n;j++){
	            if(a[j]==0) count+=1;
	            else {
	                if(count<6){
	                    ans="NO";

	                }
	                break;
	            }
	        }
	        if(ans=="NO") break;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
