// Last updated: 3/30/2026, 2:12:43 PM
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        int timereq = 0;
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> minheap;
        bool visited[50][50] = {};
        int diff[5] = {0,1,0,-1,0};
        minheap.push(make_tuple(grid[0][0],0,0));
        visited[0][0] = true;
        int maxheight = grid[0][0];

        while(!minheap.empty()){
            tuple<int,int,int> cell= minheap.top();
            minheap.pop();
            maxheight = max(maxheight,get<0>(cell));
            int r = get<1>(cell), c = get<2>(cell);
            for(int di = 0 ; di < 4 ; di++){
                int adjR = r + diff[di];
                int adjC = c + diff[di+1];
                if(adjR >= 0 && adjC >= 0 && adjR < R && adjC < C){
                    if(adjR == R-1 && adjC == C-1) return max(maxheight,grid[adjR][adjC]);
                    if(!visited[adjR][adjC]){
                        minheap.push(make_tuple(grid[adjR][adjC],adjR,adjC));
                        visited[adjR][adjC] = true;
                    }
                }
            }
        }
        return maxheight;
    }
};