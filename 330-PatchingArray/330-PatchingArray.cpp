// Last updated: 3/30/2026, 2:13:17 PM
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patch = 0;
        long long till = 0;
        for(int index = 0 ; index < nums.size() && till < n ; index++){
            while(till < n && till < nums[index] - 1){
                patch++;
                till+=till + 1;
            }
            till+=nums[index];
        }

        while(till < n){
            patch++;
            till+=till+1;
        }
        return patch;
    }
};