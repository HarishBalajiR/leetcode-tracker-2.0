1class Solution:
2    def minMirrorPairDistance(self, nums: List[int]) -> int:
3        mindist = 100001
4        seen = {}
5        for index in range(len(nums)):
6            if(nums[index] in seen):
7                mindist = min(mindist,abs(seen.get(nums[index]) - index))
8            revnum = int(str(nums[index])[::-1])
9            seen[revnum] = index
10        return mindist if mindist!=100001 else -1