// Last updated: 3/30/2026, 2:12:37 PM
class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int currmax = 0,currmin = 0,totalsum = 0;
        int maxsum = nums[0],minsum = nums[0];
        for(int i = 0 ; i < nums.length ; i++)
        {
            totalsum+=nums[i];
            currmax+=nums[i];
            maxsum = Math.max(currmax,maxsum);
            if(currmax<0) currmax = 0;
            currmin+=nums[i];
            minsum = Math.min(currmin,minsum);
            if(currmin>0) currmin = 0;
        }
        if(maxsum<0) return maxsum;
        return Math.max(maxsum,totalsum-minsum);
    }
}