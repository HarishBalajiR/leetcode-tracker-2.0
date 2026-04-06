1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n = nums.size();
5        int till = nums[0];
6        for(int index = 0 ; index < n && till >= index ; index++){
7            if(till >= index) till = max(till,index+nums[index]);
8        }
9        return till >= n-1;
10    }
11};