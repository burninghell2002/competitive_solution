#include<bits/stdc++.h>
using namespace std;

#define f(a,b,c) for(int a=b;a<c;a++)

void countsort(int arr[], int n, int pos){
    int countarr[10] = {0};
    f(i,0,n) countarr[((arr[i]/pos)%10)]++;

    f(i,0,10) countarr[i+1]+=countarr[i];

    int sortedarr[n];
    for(int i=n-1;i>=0;i--)   sortedarr[--countarr[((arr[i]/pos)%10)]] = arr[i];
    f(i,0,n)   arr[i] = sortedarr[i];
}

void radixsort(int arr[], int n){
    //get the max element
    int mx = arr[0];
    f(i,0,n)   mx = max(mx,arr[i]);

    //for every digit call the counting sort fucntion
    for(int pos=1; mx/pos>0; pos*=10) countsort(arr,n,pos);
    f(i,0,n) cout<<arr[i]<<" ";
}

int main(){
    int n; cin>>n;
    int arr[n];
    f(i,0,n)   cin>>arr[i];
    radixsort(arr,n);
    return 0;
}
