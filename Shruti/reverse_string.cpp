//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
#include<iostream>
using namespace std;
string reverse(string s) 
    {
        string ss="",helper="";
        int ind=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                helper+=s[i];
                continue;
            }
            ind=i;
            ss=helper+'.'+ss;
            helper.clear();
        }
        ss=helper+'.'+ss;
        ss.pop_back();
        return ss;
    } 
int main(){
    string s="i.like.going.out.with.my.friends";
    cout<<reverse(s);
    return 0;
}
