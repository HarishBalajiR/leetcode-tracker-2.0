// Last updated: 3/30/2026, 2:13:53 PM
class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for(int num : nums) result^=num;
        return result;
    }
}