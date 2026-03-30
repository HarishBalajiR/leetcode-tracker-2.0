// Last updated: 3/30/2026, 2:11:44 PM
class Solution {
public:
    int countElements(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());
        int count = 0;
        for(int num : nums){
            if(num > min && num < max) count++;
        }
        return count;
    }
};