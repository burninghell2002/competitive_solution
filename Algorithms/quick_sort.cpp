#include<bits/stdc++.h>
using namespace std;

#define f(a,b,c) for(int a=b;a<c;a++)

void quicksort(int arr[], int l, int r){
    if(l>=r) return;
    int pivot = arr[r];
    int i = l-1;
    f(j,l,r){
        if(arr[j]<pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);

    quicksort(arr,l,i);
    quicksort(arr,i+2,r);
}

int main(){
    int n; cin>>n;
    int arr[n];
    f(i,0,n){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    f(i,0,n){
        cout<<arr[i]<<" ";
    }
}
