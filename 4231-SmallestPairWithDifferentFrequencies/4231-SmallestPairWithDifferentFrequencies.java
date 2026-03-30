// Last updated: 3/30/2026, 2:10:32 PM
class Solution {
    public int[] minDistinctFreqPair(int[] nums) {
        Arrays.sort(nums);
        int[] result = new int[2];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i : nums) map.put(i,map.getOrDefault(i,0)+1);
        int min = nums[0];
        int mincount = map.get(min);
        boolean flag = false;
        for(int i = 1 ; i < nums.length ; i++){
            if(map.get(nums[i])!=mincount){
                result[0] = min;
                result[1] = nums[i];
                flag = true;
                break;
            }
        }
        if(!flag){
            result[0] = -1;
            result[1] = -1;
        }
        return result;
    }
}