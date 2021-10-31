#include<bits/stdc++.h>
using namespace std;

#define f(a,b,c) for(int a=b;a<c;a++)

void countsort(int arr[], int n){
    int k = arr[0];
    f(i,0,n){
        k = max(k,arr[i]);
    }
    int countarr[k+1] = {0};
    f(i,0,n){
        countarr[arr[i]]++;
    }
    f(i,0,k){
        countarr[i+1]+=countarr[i];
    }
    int sortedarr[n];
    for(int i=n-1;i>=0;i--){
        sortedarr[--countarr[arr[i]]] = arr[i];
    }
    f(i,0,n){
        cout<<sortedarr[i]<<" ";
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    countsort(arr,n);
}