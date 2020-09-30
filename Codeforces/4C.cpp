#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> a;
    int n;
    cin>>n;
    while(n--){
        string temp;
        cin>>temp;
        if(a.count(temp)){
            cout<<temp<<a[temp]<<endl;
            a[temp]++;
        }
        else{
            cout<<"OK"<<endl;
            a[temp] = 1;
        }
    }
}
