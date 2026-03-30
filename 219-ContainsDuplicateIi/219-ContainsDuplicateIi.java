// Last updated: 3/30/2026, 2:13:41 PM
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int index = 0 ; index < nums.length ; index++){
            if(map.containsKey(nums[index]) && index - map.get(nums[index])<=k){
                System.out.println(nums[index] + map.get(nums[index]));
                return true;
            }
            map.put(nums[index],index);
        }
        return false;
    }
}