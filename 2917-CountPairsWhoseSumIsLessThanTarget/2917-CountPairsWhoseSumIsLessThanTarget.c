// Last updated: 3/30/2026, 2:11:20 PM
int countPairs(int* nums, int numsSize, int target) {
    int count = 0;
    for(int slow = 0 ; slow<numsSize ; slow++)
    {
        for(int fast = slow+1 ; fast<numsSize ; fast++)
        {
            if(nums[slow] + nums[fast] < target) count++;
        }
    }
    return count;
}