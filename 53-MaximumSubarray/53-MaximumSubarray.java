// Last updated: 3/30/2026, 2:14:09 PM
class Solution {
    public int maxSubArray(int[] nums) {
        int sum = 0, max = Integer.MIN_VALUE;
        for(int num: nums)
        {
            sum+=num;
            if(sum>max) max = sum;
            if(sum<0) sum = 0;
        }
        return max;
    }
}