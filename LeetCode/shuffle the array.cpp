class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=0;
            int j=n;
            vector<int> ans;
           for(int i=0;i<n;i++){
                   ans.push_back(nums[k]);
                   ans.push_back(nums[j]);
                   k++;j++;
           }
            return ans;
    }
};
