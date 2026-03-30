// Last updated: 3/30/2026, 2:12:14 PM
class Solution {
    public int xorOperation(int n, int start) {
        int[] nums = new int[n];
        int result = start;
        for(int i = 0 ; i < n ; i++)
        {
            nums[i] = start + 2*i;
            if(i>=1) result^=nums[i];
        }
        return result;
    }
}