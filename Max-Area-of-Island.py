1import queue
2class Solution:
3    def bfs(self, grid: List[List[int]], row: int, col: int,R: int,C: int) -> int:
4        diff = [0,1,0,-1,0]
5        grid[row][col] = 0
6        q = queue.Queue()
7        q.put([row,col])
8
9        area = 1
10        while(not q.empty()):
11            val = q.get()
12            currentrow, currentcol = val[0],val[1]
13            for di in range(4):
14                adjR,adjC = currentrow + diff[di], currentcol + diff[di+1]
15                if(adjR>=0 and adjR<R and adjC>=0 and adjC<C and grid[adjR][adjC] == 1):
16                    q.put([adjR,adjC])
17                    grid[adjR][adjC] = 0
18                    area+=1
19        return area
20
21    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
22        R,C = len(grid), len(grid[0])
23        currarea,maxarea = 0,0
24        for row in range(R):
25            for col in range(C):
26                if(grid[row][col] == 1):
27                    currarea = self.bfs(grid,row,col,R,C)
28                    maxarea = max(maxarea,currarea)
29        return maxarea
30