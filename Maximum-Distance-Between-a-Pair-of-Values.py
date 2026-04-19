1class Solution:
2    def maxDistance(self, nums1: List[int], nums2: List[int]) -> int:
3        left,right = 0,0
4        maxdist = -1
5        while(left<len(nums1) and right<len(nums2)):
6            if(left<=right and nums1[left]<=nums2[right]):
7                maxdist = max(maxdist,right-left)
8                right+=1
9            else:
10                left+=1
11                right+=1
12        return maxdist if maxdist!=-1 else 0