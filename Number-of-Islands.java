1class Solution {
2    static int[] diff = {0,1,0,-1,0};
3    public void bfs(char[][] grid, int row, int col, int R, int C){
4        grid[row][col] = '0';
5        Queue<int[]> q = new LinkedList<>();
6        q.add(new int[]{row,col});
7
8        while(!q.isEmpty()){
9            int[] val = q.poll();
10            int currentrow = val[0], currentcol = val[1];
11            for(int di = 0 ; di < 4 ; di++){
12                int adjR = currentrow + diff[di], adjC = currentcol + diff[di+1];
13                if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == '1'){
14                    grid[adjR][adjC] = '0';
15                    q.add(new int[]{adjR,adjC});
16                }
17            }
18        }
19    }
20    public int numIslands(char[][] grid) {
21        int R = grid.length, C = grid[0].length;
22        int area = 0;
23        for(int row = 0 ; row < R ; row++){
24            for(int col = 0 ; col < C ; col++){
25                if(grid[row][col] == '1'){
26                    area++;
27                    bfs(grid,row,col,R,C);
28                }
29            }
30        }
31        return area;
32    }
33}