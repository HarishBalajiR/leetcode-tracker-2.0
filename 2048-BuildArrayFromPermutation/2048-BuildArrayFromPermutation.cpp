// Last updated: 3/30/2026, 2:11:53 PM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int index = 0 ; index < nums.size() ; index++){
            result.push_back(nums[nums[index]]);
        }
        return result;
    }
};