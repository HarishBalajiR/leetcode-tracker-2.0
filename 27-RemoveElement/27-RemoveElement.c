// Last updated: 3/30/2026, 2:14:25 PM
int removeElement(int* nums, int numsSize, int val) {
    int left = 0 , right = numsSize - 1 ,count = 0;
    while(left <= right)
    {
        int temp = 0;
        if(nums[left]==val && nums[right]!=val)
        {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
            count++;
        }
        if(nums[left]!=val)
        {
            left++;
            count++;
        }
        if(nums[right]==val) right--;
    }
    return count;
}