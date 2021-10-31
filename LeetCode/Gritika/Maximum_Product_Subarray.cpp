#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        
        int maxP = nums[0], minP = nums[0];
        int ans = nums[0];
        
        for(int i=1; i<n;i++){
            if(nums[i]<0){
                swap(maxP, minP);
            }
            maxP = max(maxP*nums[i], nums[i]);
            minP = min(minP*nums[i], nums[i]);
            // cout<<maxP<<" "<<minP<<endl;
            ans = max(maxP, ans);
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {2,3,-2,4};
    Solution s;
    cout<<"Max Product Subarray = "<<s.maxProduct(nums);
    
    
    return 0;
}