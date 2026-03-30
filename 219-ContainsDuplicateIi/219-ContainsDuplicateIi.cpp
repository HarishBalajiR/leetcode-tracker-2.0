// Last updated: 3/30/2026, 2:13:35 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        int n = nums.size();
        for(int index = 0 ; index < n ; index++){
            if(hashmap.find(nums[index]) != hashmap.end() && abs(index - hashmap.at(nums[index]))<=k) return true;
            hashmap[nums[index]] = index;
        }
        return false;
    }
};