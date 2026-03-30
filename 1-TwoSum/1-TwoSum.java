// Last updated: 3/30/2026, 2:14:44 PM
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int index = 0 ; index < nums.length ; index++){
            int value = target - nums[index];
            if(map.containsKey(value)){
                result[0] = map.get(value);
                result[1] = index;
                break;
            }
            map.put(nums[index],index);
        }
        return result;
    }
}