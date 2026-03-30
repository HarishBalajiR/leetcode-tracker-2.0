// Last updated: 3/30/2026, 2:12:57 PM
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int slow = 0, fast = 0;
        int n = nums.length;
        int count = 0, max = 0;
        while(fast < n){
            if(nums[fast]!=1){
                max = count > max ? count : max;
                fast++;
                count = 0;
            }
            else{
                count++;
                fast++;
            }
        }
        return max>count ? max : count;
    }
}