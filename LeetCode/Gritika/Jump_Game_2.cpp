#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(nums[0]==0) return 0;
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            while(nums[i]!=0){
                if(dp[n-1] != INT_MAX)
                    return dp[n-1];
                if(i+nums[i]<n){
                    dp[i+nums[i]] = min(1+dp[i], dp[i+nums[i]]);
                }
                nums[i]--;
            }
        }
        return dp[n-1];
    }
};

int main()
{
    vector<int> nums = {2,3,1,1,4};
    Solution s;
    cout<<" Min jumps = "<<s.jump(nums);
    
    return 0;
}