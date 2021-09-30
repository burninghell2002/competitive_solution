#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin>>k;
	for(int t=0;t<k;t++){
	    int n,c,sum=0,sumNew=0;
	    cin>>n>>c;
	    int *a=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }

	    for(int i=0;i<n;i++){
	        if(a[i]>c){
	        a[i]=c;

	    }
	    sumNew+=a[i];
	    }


	    cout<<sum-sumNew<<endl;

	}
	return 0;
}
