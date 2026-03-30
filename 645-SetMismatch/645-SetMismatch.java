// Last updated: 3/30/2026, 2:12:53 PM
class Solution {
    public int[] findErrorNums(int[] nums) {
        int[] result = new int[2];
        int fsum = nums.length*(nums.length+1)/2;
        int osum = 0;
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0 ; i < nums.length ; i++){
            osum+=nums[i];
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }

        for(int key: map.keySet()){
            if(map.get(key)>1){
                result[0] = key;
                result[1] = fsum - osum + key;
            }
        }
        return result;
    }
}