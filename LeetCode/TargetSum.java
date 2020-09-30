class Solution {
    public int findTargetSumWays(int[] nums, int S) {
        int sum=0;
        for(int i :nums){
            sum+=i;
        }
        int temp=(sum+S)/2;
        int[][] dp=new int[nums.length+1][temp+1];
        
        
        
         if(S>sum  || temp%2!=0){
            return 0;
        }
        
        
        for(int j=0;j<=temp;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<=nums.length;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=nums.length;i++){
            for(int j=1;j<=temp;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[nums.length][temp];
        
    }
}