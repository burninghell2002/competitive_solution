// https://leetcode.com/problems/string-to-integer-atoi/
#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s){
    if(s=="")return 0;
    long int ans=0;
    int sign=1;
    bool intFound=false;
    bool signFound=false;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(intFound || signFound)break;
            else{
                continue;
            }
        }
        
        if(s[i]=='-' || s[i]=='+'){
            if(intFound || signFound==true)break;  
            else{
                signFound=true;
                sign=(s[i]=='-')?-1:1;
            }
        }
        else if(s[i]-'0'>=0 && s[i]-'0'<=9){
            intFound=true;
            ans=ans*10;
            if(ans>=INT_MAX)return (sign==-1)?INT_MIN:INT_MAX;
            ans+=(s[i]-'0');
            // if(ans==2147483647 && sign==-1)return -2147483647;
            if(ans==INT_MAX && sign==-1)return -1*INT_MAX;
            if(ans>=INT_MAX)return (sign==-1)?INT_MIN:INT_MAX;
            

        }
        else if(s[i]-'0'<0 || s[i]-'0'>9){
            break;
        }
    }
    return sign*ans;
}
int main(){
    cout<<myAtoi("42");
    return 0;
}