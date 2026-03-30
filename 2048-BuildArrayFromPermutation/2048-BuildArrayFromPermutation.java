// Last updated: 3/30/2026, 2:11:49 PM
class Solution {
    public int[] buildArray(int[] nums) {
        int[] arr = new int[nums.length];
        for(int i = 0 ; i < nums.length ; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
}