1class Solution:
2    def maxDistance(self, colors: List[int]) -> int:
3        distfromleft,N = 0,len(colors)
4        for rightindex in range(N-1,0,-1):
5            if(colors[0]!=colors[rightindex]):
6                distfromleft = rightindex
7                break
8        for leftindex in range(N):
9            if(colors[N-1]!=colors[leftindex]):
10                return max(distfromleft,N-leftindex-1)