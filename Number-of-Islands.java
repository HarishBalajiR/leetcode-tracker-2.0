1class Solution {
2    int[] diff = {0,1,0,-1,0};
3    private void dfs(char[][] grid, int row, int col, int R, int C){
4        grid[row][col] = '0';
5        for(int di = 0 ; di < 4 ; di++){
6            int adjR = row + diff[di], adjC = col + diff[di+1];
7            if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == '1'){
8                dfs(grid,adjR,adjC,R,C);
9            }
10        }
11    }
12    public int numIslands(char[][] grid) {
13        int count = 0;
14        int R = grid.length, C = grid[0].length;
15        for(int row = 0 ; row < R ; row++){
16            for(int col = 0 ; col < C ; col++){
17                if(grid[row][col] == '1'){
18                    dfs(grid,row,col,R,C);
19                    count++;
20                }
21            }
22        }
23        return count;
24    }
25}