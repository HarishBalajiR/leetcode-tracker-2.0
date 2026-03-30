// Last updated: 3/30/2026, 2:13:47 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums) result^=num;
        return result;
    }
};