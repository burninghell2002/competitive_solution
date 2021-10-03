#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else if(st.empty()) return false;
            else if(s[i]==')'){
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }
            else if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};

int main()
{
    string str = "()[]{}";
    Solution s;
    if(s.isValid(str)){
        cout<<"Valid Parenthesis";
    }
    else cout<<"Not Valid Parenthesis";
    
    return 0;
}