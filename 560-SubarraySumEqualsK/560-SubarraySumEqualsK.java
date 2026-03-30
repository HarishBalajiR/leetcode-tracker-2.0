// Last updated: 3/30/2026, 2:13:03 PM
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int subcount = 0,currsum = 0;
        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0,1);
        for(int left = 0 ; left < n ; left++){
            currsum += nums[left];
            if(map.containsKey(currsum-k)) subcount+=map.get(currsum-k);
            map.put(currsum,map.getOrDefault(currsum,0)+1);
        }
        return subcount;
    }
}