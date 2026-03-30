// Last updated: 3/30/2026, 2:13:26 PM
class Solution {
    public int lengthOfLIS(int[] nums) {
        int[] dp = new int[nums.length];
        Arrays.fill(dp,1);
        for(int i = nums.length - 1 ; i>=0 ; i--){
            for(int j = i + 1 ; j < nums.length ; j++){
                if(nums[i] < nums[j]) dp[i] = Math.max(dp[i],1+dp[j]);
            }
        }
        int max = -1;
        for(int i = 0 ; i < dp.length ; i++){
            if(dp[i] > max) max = dp[i];
        }
        return max;
        
    }
}