// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
      int depth = 0,mx=-1;
        int n  = s.size();

        for(int i=0;i<n;i++){

           if(s[i]=='('){
             depth++;
               if(depth>mx){
               mx= depth;
             } 
           }  
          else if(s[i]==')'){
             depth--; 
               if(depth>mx){
               mx= depth;
             } 
           } 

        }
        if(mx==-1)
            return 0;
        return mx;
    }
};

int main(){
    string s="(1+(2*3)+((8)/4))+1";
    Solution sol;
     cout<<sol.maxDepth(s) ;
} 