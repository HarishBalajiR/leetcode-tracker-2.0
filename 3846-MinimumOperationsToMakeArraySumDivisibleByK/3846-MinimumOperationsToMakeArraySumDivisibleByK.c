// Last updated: 3/30/2026, 2:11:14 PM
int minOperations(int* nums, int numsSize, int k) {
    int sum = 0,op=0;
    for(int i = 0 ; i < numsSize ; i++)
    {
        sum+=*nums;
        nums++;
    }
    if(sum%k==0) return 0;
    else
    {
        while(sum%k!=0)
        {
            op++;
            sum--;
        }
    }
    return op;
}