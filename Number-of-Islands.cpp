1class Solution {
2private:
3    int diff[5] = {0,1,0,-1,0};
4    void dfs(vector<vector<char>>& grid, int row, int col, int R, int C){
5        grid[row][col] = '0';
6        for(int di = 0 ; di < 4 ; di++){
7            int adjR = row + diff[di];
8            int adjC = col + diff[di+1];
9            if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == '1'){
10                dfs(grid,adjR,adjC,R,C);
11            }
12        }
13    }
14public:
15    int numIslands(vector<vector<char>>& grid) {
16        int count = 0;
17        int R = grid.size(), C = grid[0].size();
18        for(int row = 0 ; row < R ; row++){
19            for(int col = 0 ; col < C ; col++){
20                if(grid[row][col] == '1'){
21                    dfs(grid,row,col,R,C);
22                    count++;
23                }
24            }
25        }
26        return count;
27    }
28};