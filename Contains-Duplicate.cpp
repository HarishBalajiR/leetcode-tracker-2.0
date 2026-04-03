1class Solution {
2    public boolean containsDuplicate(int[] nums) {
3        HashSet<Integer> set = new HashSet<>();
4        for(int num: nums) set.add(num);
5        if(set.size()==nums.length) return false;
6        return true;
7    }
8}