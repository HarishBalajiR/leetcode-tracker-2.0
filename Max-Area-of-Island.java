1class Solution {
2    static int[] diff = {0,1,0,-1,0};
3    private int bfs(int[][] grid, int row, int col, int R, int C){
4        grid[row][col] = 0;
5        Queue<int[]> queue = new LinkedList<>();
6        queue.add(new int[]{row,col});
7        int area = 1;
8        while(!queue.isEmpty()){
9            int[] val = queue.poll();
10            int currentrow = val[0] , currentcol = val[1];
11            for(int di = 0 ; di < 4 ; di++){
12                int adjR = currentrow + diff[di], adjC = currentcol + diff[di+1];
13                if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == 1){
14                    grid[adjR][adjC] = 0;
15                    queue.add(new int[]{adjR,adjC});
16                    area++;
17                }
18            }
19        }
20        return area;
21    }
22    public int maxAreaOfIsland(int[][] grid) {
23        int R = grid.length, C = grid[0].length;
24        int currarea = 0, maxarea = 0;
25        for(int row = 0 ; row < R ; row++){
26            for(int col = 0 ; col < C ; col++){
27                if(grid[row][col] == 1){
28                    currarea = bfs(grid,row,col,R,C);
29                    maxarea = Math.max(maxarea,currarea);
30                }
31            }
32        }
33        return maxarea;
34    }
35}