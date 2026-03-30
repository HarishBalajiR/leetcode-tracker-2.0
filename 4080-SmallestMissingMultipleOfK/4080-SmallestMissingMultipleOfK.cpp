// Last updated: 3/30/2026, 2:10:51 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int value = k ; value <= value*nums.size() ; value+=k){
            if(find(nums.begin(),nums.end(),value)==nums.end()) return value;
        }
        return 0;
    }
};