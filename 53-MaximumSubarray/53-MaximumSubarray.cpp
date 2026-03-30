// Last updated: 3/30/2026, 2:14:05 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0],currsum = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            currsum = max(nums[i],currsum+nums[i]);
            maxsum = max(maxsum,currsum);
        }
        return maxsum;
    }
};