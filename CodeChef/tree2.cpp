#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int t;
cin>>t;
for(int g=0;g<t;g++){
int n;
cin>>n;
long *a=new long[n];
for(long i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);

long op=0;

for(long i=0;i<n-1;i++){
    if(a[i]!=a[i+1] ) op++;
}
if(a[0]==0) op-=1;
cout<<op+1<<endl;
}
return 0;
}
