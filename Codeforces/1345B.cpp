#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const long long MAX = 1e9;
vector<long long> pyr; //cards in pyramid

int binarySearch(int n)
{
    int l = 0,r = pyr.size() - 1;
    int ind = 0;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(pyr[mid] == n) return mid;
        if(pyr[mid] < n){
            l = mid + 1;
            ind = mid;
        }
        else{
            r = mid - 1;
        }
    }
    return ind;
}

int main(){
    long long sum =0;
    for(int i =1;sum<=MAX;i++){
        pyr.push_back(sum);
        sum += 3*i-1;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans =0;
        int i = binarySearch(n);
        while(i>0&&n>0){
            n -= pyr[i];
            ans ++;
            i = binarySearch(n);
        }
        cout<<ans<<endl;
    }
}
