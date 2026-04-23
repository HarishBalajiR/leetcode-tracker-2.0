1class Solution {
2    public int[] getSumAbsoluteDifferences(int[] nums) {
3        int N = nums.length;
4        int[] prefixsum = new int[N];
5        int[] suffixsum = new int[N];
6        int[] result = new int[N];
7        prefixsum[0] = nums[0];
8        suffixsum[N-1] = nums[N-1];
9        for(int index = 1 ; index < N ; index++) prefixsum[index] = prefixsum[index-1] + nums[index];
10        for(int index = N - 2 ; index >= 0 ; index--) suffixsum[index] = suffixsum[index+1] + nums[index];
11        
12        for(int index = 0 ; index < N ; index++){
13            int leftsum = prefixsum[index] - nums[index];
14            int rightsum = suffixsum[index] - nums[index];
15            result[index] = nums[index]*index - leftsum + rightsum - nums[index]*(N-index-1);
16        }
17        return result;
18    }
19}