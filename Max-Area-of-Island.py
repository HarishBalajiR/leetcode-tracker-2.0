1class Solution:
2    def dfs(self,grid: List[List[int]], row: int, col: int, R: int, C: int):
3        diff = [0,1,0,-1,0]
4        grid[row][col] = 0
5        steps = 1
6        for di in range(4):
7            adjR,adjC = row+diff[di],col+diff[di+1]
8            if(adjR>=0 and adjR<R and adjC>=0 and adjC<C and grid[adjR][adjC] == 1):
9                steps+=self.dfs(grid,adjR,adjC,R,C)
10        return steps
11    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
12        R,C,area,maxarea = len(grid),len(grid[0]),0,0
13        for row in range(R):
14            for col in range(C):
15                if(grid[row][col] == 1):
16                    area = self.dfs(grid,row,col,R,C)
17                    maxarea = max(maxarea,area)
18        return maxarea