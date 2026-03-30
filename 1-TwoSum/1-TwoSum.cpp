// Last updated: 3/30/2026, 2:14:43 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> hashmap;
        for(int index = 0 ; index < nums.size() ; index++){
            int value = target - nums[index];
            if(hashmap.find(value)!=hashmap.end()){
                result.push_back(hashmap[value]);
                result.push_back(index);
            }
            hashmap[nums[index]] = index;
        }
        return result;
    }
};
