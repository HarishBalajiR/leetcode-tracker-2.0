// Last updated: 3/30/2026, 2:10:56 PM
class Solution {
    public int missingMultiple(int[] nums, int k) {
        ArrayList<Integer> arr = new ArrayList<>();
        for(int num : nums) arr.add(num);
        for(int value = k ; value <= value*nums.length ; value+=k){
            if(!arr.contains(value)) return value;
        }
        return 0;
    }
}