class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cur_max=nums[0]
        max_till=nums[0]
        
        
        for i in range(1,len(nums)):
            print(nums[i],cur_max+nums[i])
            cur_max=max(nums[i],cur_max+nums[i])
            max_till=max(max_till,cur_max)
            
            
        return max_till
        
