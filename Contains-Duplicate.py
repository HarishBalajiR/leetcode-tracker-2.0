1class Solution:
2    def containsDuplicate(self, nums: List[int]) -> bool:
3        seen = set()
4        for i in nums:
5            seen.add(i)
6        return len(nums)!=len(seen)