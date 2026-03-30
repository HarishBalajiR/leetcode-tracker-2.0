// Last updated: 3/30/2026, 2:10:30 PM
class Solution {
    public int gcd(int a, int b) {
        if (b==0) return a;
        return gcd(b,a%b);
    }
   
    public long gcdSum(int[] nums) {
        long sum = 0;
        int n = nums.length;
        int[] prefixGcd = new int[n];
        prefixGcd[0] = nums[0];
        int runnmax = nums[0];
        for(int i = 1 ; i < n ; i++){
            runnmax = Math.max(runnmax,nums[i]);
            prefixGcd[i] = gcd(nums[i],runnmax);
        }
        Arrays.sort(prefixGcd);
        int left = 0, right = n-1;
        while(left < right){
            sum+=gcd(prefixGcd[left],prefixGcd[right]);
            left++;
            right--;
        }
        return sum;
    }
}