// Last updated: 3/30/2026, 2:11:13 PM
class Solution {
    public int minimumOperations(int[] nums) {
        int op = 0;
        for(int num : nums) if(num%3!=0) op++;
        return op;
    }
}