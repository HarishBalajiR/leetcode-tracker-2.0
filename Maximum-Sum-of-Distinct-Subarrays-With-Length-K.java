1class Solution {
2    public long maximumSubarraySum(int[] nums, int k) {
3        long maxsum = 0, windowsum = 0;
4        HashMap<Integer,Integer> map = new HashMap<>();
5        int n = nums.length;
6        int head = 0;
7        for(int tail = 0 ; tail < n ; tail++){
8            windowsum+=nums[tail];
9            map.put(nums[tail],map.getOrDefault(nums[tail],0)+1);
10            if(tail - head + 1 > k){
11                windowsum-=nums[head];
12                map.put(nums[head],map.get(nums[head])-1);
13                if(map.get(nums[head]) == 0) map.remove(nums[head]);
14                head++;
15            }
16            if(tail - head + 1 == k && map.size()==k) maxsum = Math.max(maxsum,windowsum);
17        }
18        return maxsum;
19    }
20}