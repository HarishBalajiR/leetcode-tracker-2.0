1class Solution {
2private:
3    static constexpr int diff[] = {0,1,0,-1,0};
4    int bfs(vector<vector<int>>& grid, int row, int col, int R, int C){
5        grid[row][col] = 0;
6        queue<pair<int,int>> q;
7        q.push(make_pair(row,col));
8        int area = 1;
9        while(!q.empty()){
10            auto val = q.front();
11            q.pop();
12            int currentrow = get<0>(val), currentcol = get<1>(val);
13            for(int di = 0 ; di < 4 ; di++){
14                int adjR = currentrow + diff[di], adjC = currentcol + diff[di+1];
15                if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && grid[adjR][adjC] == 1){
16                    grid[adjR][adjC] = 0;
17                    q.push(make_tuple(adjR,adjC));
18                    area++;
19                }
20            }
21        }
22        return area;
23    }
24public:
25    int maxAreaOfIsland(vector<vector<int>>& grid) {
26        int R = grid.size(), C = grid[0].size();
27        int current = 0, mxarea = 0;
28        for(int row = 0 ; row < R ; row++){
29            for(int col = 0 ; col < C ; col++){
30                if(grid[row][col] == 1){
31                    current = bfs(grid,row,col,R,C);
32                    mxarea = max(mxarea,current);
33                }
34            }
35        }
36        return mxarea;
37    }
38};