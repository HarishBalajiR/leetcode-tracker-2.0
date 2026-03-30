// Last updated: 3/30/2026, 2:12:58 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int subcount = 0, currsum = 0, n = nums.size();
        map<int,int> hashmap;
        hashmap[0] = 1;
        for(int left = 0 ; left < n ; left++){
            currsum+=nums[left];
            if(hashmap.find(currsum-k)!=hashmap.end()) subcount+=hashmap[currsum-k];
            if(hashmap.find(currsum)!=hashmap.end()) hashmap[currsum]++;
            else hashmap[currsum] = 1;
        }
        return subcount;
    }
};