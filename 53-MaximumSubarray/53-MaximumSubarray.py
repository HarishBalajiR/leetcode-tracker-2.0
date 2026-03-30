# Last updated: 3/30/2026, 2:14:21 PM
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        s = 0
        mx = nums[0]
        for i in range(len(nums)):
            s+=nums[i]
            if(s>mx): mx = s
            if(s<0): s = 0
        return mx