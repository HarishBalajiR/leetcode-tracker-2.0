1import queue
2class Solution:
3    def bfs(self, grid: List[List[str]],row: int,col: int,R: int,C: int) -> None:
4        diff = [0,1,0,-1,0]
5        grid[row][col] = 0
6        q = queue.Queue()
7        q.put([row,col])
8        while(not q.empty()):
9            val = q.get()
10            currentrow,currentcol = val[0],val[1]
11            for di in range(4):
12                adjR,adjC = currentrow + diff[di], currentcol + diff[di+1]
13                if(adjR>=0 and adjR<R and adjC>=0 and adjC<C and grid[adjR][adjC] == "1"):
14                    grid[adjR][adjC] = "0"
15                    q.put([adjR,adjC])
16
17    def numIslands(self, grid: List[List[str]]) -> int:
18        R,C = len(grid), len(grid[0])
19        area = 0
20        for row in range(R):
21            for col in range(C):
22                if(grid[row][col] == "1"):
23                    self.bfs(grid,row,col,R,C)
24                    area+=1
25        return area