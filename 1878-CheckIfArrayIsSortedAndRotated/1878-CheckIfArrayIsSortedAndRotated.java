// Last updated: 3/30/2026, 2:11:59 PM
class Solution {
    public boolean check(int[] nums) {
        int drop = 0;
        for(int i = 1 ; i < nums.length ; i++){
            if(nums[i] < nums[i-1]) drop++;
        }
        if(nums[nums.length - 1] > nums[0]) drop++;
        return drop<=1;
    }
}