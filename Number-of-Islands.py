1class Solution:
2    def dfs(self, grid: List[List[str]], row: int, col: int, R: int, C: int):
3        diff = [0,1,0,-1,0]
4        grid[row][col] = '0'
5        for di in range(4):
6            adjR,adjC = row+diff[di],col+diff[di+1]
7            if(adjR>=0 and adjR<R and adjC>=0 and adjC<C and grid[adjR][adjC] == '1'):
8                self.dfs(grid,adjR,adjC,R,C)
9
10    def numIslands(self, grid: List[List[str]]) -> int:
11        R,C,count = len(grid),len(grid[0]), 0
12        for row in range(R):
13            for col in range(C):
14                if(grid[row][col] == '1'):
15                    self.dfs(grid,row,col,R,C)
16                    count+=1
17        return count