// Last updated: 3/30/2026, 2:13:43 PM
class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        int n = nums.length;
        int ans = 0;
        for(int num : nums) map.put(num,map.getOrDefault(num,0)+1);
        for(int key : map.keySet()){
            if(map.get(key) > n/2){
                ans = key;
            }
        }
        return ans;
    }
}