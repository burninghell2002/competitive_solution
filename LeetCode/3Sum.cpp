// i      j              k
// -2 -2 -1 -1 0 0 0 2 2 2

//  i j     k  
//  1 -1 -1 0
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>>ans;
    if(nums.size()<=2)return ans;
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size()-2;i++){
        if(i!=0 && nums[i]==nums[i-1])continue;        
        int temp=0-nums[i];
        int j=i+1, k=(int)nums.size()-1;
        while(j<k){
            if(nums[j]+nums[k]==temp){
                ans.push_back({nums[i], nums[j], nums[k]});
                while(j<k && nums[j+1]==nums[j])j++;
                while(j<k && nums[k-1]==nums[k])k--;
                j++;k--;
            }
            else if(nums[k]+nums[j]>temp){
                k--;
                if(k>j && k>i)while(nums[k+1]==nums[k])k--;
            }
            else if(nums[j]+nums[k]<temp){
                j++;
                if(j<k && j<nums.size())while(nums[j-1]==nums[j])j++;
            }
        }        
    }
    return ans;
}
};
int main()
{

    return 0;
}