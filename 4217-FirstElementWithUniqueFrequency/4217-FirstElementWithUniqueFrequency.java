// Last updated: 3/30/2026, 2:10:36 PM
class Solution {
    public int firstUniqueFreq(int[] nums) {
        LinkedHashMap<Integer,Integer> freq = new LinkedHashMap<>();
        HashMap<Integer,Integer> countof = new HashMap<>();
        for(int num: nums)
        {
            freq.put(num,freq.getOrDefault(num,0)+1);
        }
        for(int count: freq.values())
        {
            countof.put(count,countof.getOrDefault(count,0)+1);
        }
        for(int key: freq.keySet())
        {
            int times = freq.get(key);
            if(countof.get(times)==1) return key;
        }
        return -1;
    }
}