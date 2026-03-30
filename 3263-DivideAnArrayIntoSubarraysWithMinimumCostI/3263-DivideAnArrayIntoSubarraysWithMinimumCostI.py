# Last updated: 3/30/2026, 2:11:11 PM
class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        first = nums[0]
        min_cost = sorted(nums[1:])
        return first+min_cost[0]+min_cost[1]
            
