#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reachable=0;

        for(int i=0;i<n;i++)
        {
            if(reachable<i)
                return false;
            
            reachable=max(reachable,i+nums[i]);
        }
        return true;
        
    }
    
};

int main()
{
    vector<int> nums = {2,3,1,1,4};
    Solution s;
    if(s.canJump(nums)){
        cout<<"Last index is reachable"<<endl;
    }
    else cout<<"Last index is not reachable"<<endl;

    return 0;
}