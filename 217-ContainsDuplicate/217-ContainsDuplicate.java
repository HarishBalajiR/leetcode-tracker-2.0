// Last updated: 3/30/2026, 2:13:36 PM
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for(int num: nums) set.add(num);
        if(set.size()==nums.length) return false;
        return true;
    }
}