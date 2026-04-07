1class Solution {
2private:
3    int burst(vector<vector<int>>& dp, int N, vector<int> nums, int left, int right){
4        if(left > right) return 0;
5        if(dp[left][right]!=0) return dp[left][right];
6        int maxcoins = 0;
7        for(int index = left ; index <= right ; index++){
8            int currcoins = burst(dp, N, nums,left,index-1) + burst(dp, N, nums,index+1,right);
9            int lastburst = nums[index]*(left-1>=0 ? nums[left-1] : 1)*(right+1 < N ?nums[right+1] : 1);
10            currcoins+=lastburst;
11            maxcoins = max(maxcoins,currcoins);
12        }
13        dp[left][right] = maxcoins;
14        return maxcoins;
15    }
16public:
17    int maxCoins(vector<int>& nums) {
18        int N = nums.size();
19        vector<vector<int>> dp(N,vector<int>(N,0));
20        return burst(dp,N,nums,0,N-1);
21    }
22};