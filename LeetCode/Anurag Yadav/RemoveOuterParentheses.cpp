// https://leetcode.com/problems/remove-outermost-parentheses/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
       stack<char> st;
        for(auto c : s){
            
            if(c == '('){
                
                if(st.size()>0){
                    ans+='(';
                    
                }
                st.push('(');
            }
            else{
                
                if(st.size()>1){
                  ans+=')';
                    
                }
                st.pop();
            }
            
        }
      
        return ans;
        
    }
};
int main(){
    string s;
    cin>>s;
    Solution sol;
     cout<<sol.removeOuterParentheses(s);
}