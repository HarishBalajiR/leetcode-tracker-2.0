// Last updated: 3/30/2026, 2:10:39 PM
int dominantIndices(int* nums, int numsSize) {
    int count = 0;
    float average = 0.0f;
    for(int i = 0 ; i < numsSize - 1 ; i++)
    {
        int j = 0,sum = 0;
        for(j = i + 1 ; j < numsSize ; j++)
        {
            sum+=nums[j];
        }
        average = (float)sum/(j-i-1);
        if(nums[i] > average) count++;
    }
    return count;
}