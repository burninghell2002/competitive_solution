#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

typedef long long ll;

typedef vector<int> vi;

int main(){

    fastio;

    int n;

    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    vector<pair<int,int>> v;

    int k=0;

    for(int i=0;i<n-1;i++){

        int mini=a[i];

        int index=i;

        for(int j=i+1;j<n;j++){

            if(a[j]<mini){

                mini=a[j];

                index=j;

            }

        }

        if(index!=i){

            int temp=a[i];

            a[i]=a[index];

            a[index]=temp;

            k++;

            v.push_back(make_pair(i,index));

        }

        if(k==n){

            break;

        }

    }

    

    cout<<k<<endl;

    for(int i=0;i<v.size();i++){

        cout<<v[i].first<<" "<<v[i].second<<endl;

    }

}

