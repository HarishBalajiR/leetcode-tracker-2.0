// Last updated: 3/30/2026, 2:13:30 PM
void moveZeroes(int* nums, int numsSize) {
    int left = 0,temp = 0;
    for(int right = 0 ; right < numsSize ; right++)
    {
        if(nums[right]!=0)
        {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
        }
    }
}