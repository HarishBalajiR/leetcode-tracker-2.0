1class Solution {
2private:
3    static constexpr int diff[] = {0,1,0,-1,0};
4    void bfs(vector<vector<char>>& grid, int row, int col, int R, int C){
5        grid[row][col] = '0';
6        queue<pair<int,int>> q;
7        q.push(make_pair(row,col));
8        
9        while(!q.empty()){
10            auto val = q.front();
11            q.pop();
12            int currentrow = val.first, currentcol = val.second;
13            for(int di = 0 ; di < 4 ; di++){
14                int adjR = currentrow + diff[di], adjC = currentcol + diff[di+1];
15                if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == '1'){
16                    grid[adjR][adjC] = '0';
17                    q.push(make_pair(adjR,adjC));
18                }
19            }
20        }
21    }
22public:
23    int numIslands(vector<vector<char>>& grid) {
24        int R = grid.size(), C = grid[0].size();
25        int count = 0;
26        for(int row = 0 ; row < R ;row++){
27            for(int col = 0 ; col < C ; col++){
28                if(grid[row][col] == '1'){
29                    count++;
30                    bfs(grid,row,col,R,C);
31                }
32            }
33        }
34        return count;
35    }
36};