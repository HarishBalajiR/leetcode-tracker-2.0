// Last updated: 3/30/2026, 2:14:27 PM
class Solution {
private:
    void swap(vector<int>& nums,int slow, int fast){
        int temp = nums[slow];
        nums[slow] = nums[fast];
        nums[fast] = temp;
    }
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0, fast = 1,n = nums.size();
        while(fast < n){
            if(nums[slow]!=nums[fast]){
                slow++;
                swap(nums,slow,fast);
            }
            fast++;
        }
        return slow+1;
    }
};