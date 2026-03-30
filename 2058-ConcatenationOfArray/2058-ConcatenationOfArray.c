// Last updated: 3/30/2026, 2:11:46 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2*numsSize;
    int* result = (int*)malloc(2*numsSize*sizeof(int));
    for(int i = 0 ; i < 2*numsSize ; i++)
    {
        result[i] = nums[i%numsSize];
    }
    return result;
}