// Last updated: 3/30/2026, 2:14:14 PM
int maxSubArray(int* nums, int numsSize) {
    int sum = 0,mx = INT_MIN;
    for(int i = 0 ; i < numsSize ; i++)
    {
        sum+=*nums;
        if(sum>mx) mx = sum;
        if(sum<0) sum = 0;
        nums++;
    }
    return mx;
}