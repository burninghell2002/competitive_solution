// https://leetcode.com/problems/fibonacci-number/

//solution using Binet's formula
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
      float phi = sqrt(5);
        
     long long int x = (pow( (1+phi),n));
   long long int y = (pow( (1-phi),n));
   long long int z = (pow(2,n)*phi);
        return (x-y)/z;
    }
};

int main(){
    int n ; 
    cin>>n;
    Solution s;
   cout<<s.fib(n);

}