// Last updated: 3/30/2026, 2:11:06 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op = 0;
        for(int num : nums) if(num%3!=0) op++;
        return op;
    }
};