# Last updated: 3/30/2026, 2:11:08 PM
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        s = sum(nums)
        return s%k