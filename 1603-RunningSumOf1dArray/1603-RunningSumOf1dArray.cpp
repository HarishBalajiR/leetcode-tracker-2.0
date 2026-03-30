// Last updated: 3/30/2026, 2:12:22 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixsum;
        prefixsum.push_back(nums[0]);
        for(int i = 1 ; i < n ; i++) prefixsum.push_back(prefixsum[i-1] + nums[i]);
        return prefixsum;
    }
};