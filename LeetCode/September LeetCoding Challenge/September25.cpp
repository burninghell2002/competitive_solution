//Question link: https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/557/week-4-september-22nd-september-28th/3472/


bool myCompare(int a, int b){
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return (ab.compare(ba)>0);
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans ="";
        sort(nums.begin(),nums.end(),myCompare);
        for(int i =0;i<nums.size();i++){
            ans += to_string(nums[i]);
        }
        int n = ans.length();
        for(int i =0;i<n-1;i++){
            if(ans[0]=='0'){
                ans = ans.erase(0,1);
            }
        }
        return ans;
    }
};
