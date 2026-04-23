1class Solution:
2    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
3        N = len(nums)
4        prefixarr,suffixarr,result = [0]*N,[0]*N,[0]*N
5        prefixarr[0] = nums[0]
6        suffixarr[N-1] = nums[N-1]
7        for leftindex in range(1,N):
8            prefixarr[leftindex] = prefixarr[leftindex-1] + nums[leftindex]
9        for rightindex in range(N-2,-1,-1):
10            suffixarr[rightindex] = suffixarr[rightindex+1] + nums[rightindex]
11        for index in range(0,N):
12            leftsum,rightsum = prefixarr[index] - nums[index],suffixarr[index] - nums[index]
13            result[index] = nums[index]*index - leftsum + rightsum - nums[index]*(N-index-1)
14        return result