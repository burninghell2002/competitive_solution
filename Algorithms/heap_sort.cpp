#include<bits/stdc++.h>
using namespace std;

void max_heapify(int arr[], int n, int i){
	int l = (2*i)+1;
	int r = l+1;
	int largest = i;
	if(l<=n-1 && arr[l]>arr[largest]){
		largest = l;
	}
	if(r<=n-1 && arr[r]>arr[largest]){
		largest = r;
	}
	if(largest==i) return;
	else {
		swap(arr[i],arr[largest]);
		max_heapify(arr,n,largest);
	}
}

void build_max_heap(int arr[], int n){
	for(int i=ceil(n/2)-1;i>=0;i--){
		max_heapify(arr,n,i);
	}
}

void heapsort(int arr[], int n){
	build_max_heap(arr,n);
	for(int i=n-1;i>0;i--){
		swap(arr[0],arr[i]);
		max_heapify(arr,i,0);
	}
}

int main(){
	int arr[10] = {5,16,3,12,9,56,24,1,33,69};
	heapsort(arr,10);
	for(int i : arr) cout<<i<<" ";
	return 0;
}
