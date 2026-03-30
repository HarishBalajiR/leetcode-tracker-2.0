# Last updated: 3/30/2026, 2:14:16 PM
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if target in nums: return nums.index(target)
        else: return -1