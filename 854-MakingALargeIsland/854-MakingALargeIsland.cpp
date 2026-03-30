// Last updated: 3/30/2026, 2:12:40 PM
class Solution {
    int diff[5] = {0,1,0,-1,0};
private:
    void dfs(int r, int c, int R, int C, vector<vector<int>>&grid, vector<vector<int>>&isl, int ictr)
    {
        isl[r][c] = ictr; // Visited
        for(int di = 0 ; di < 4 ; di++){
            int adjR = r + diff[di], adjC = c + diff[di+1];
            if(adjR>=0 && adjC>=0 && adjR<R && adjC<C && grid[adjR][adjC] == 1 && isl[adjR][adjC]==0){
                dfs(adjR,adjC,R,C,grid,isl,ictr);
            }
        }
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        vector<vector<int>> isl(R, vector<int>(C,0));
        int ictr = 0;  // Number of islands
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(grid[r][c]==1 && isl[r][c]==0){ // Must be an island and not be visited
                    dfs(r,c,R,C,grid,isl,++ictr);
                }
            }
        }
        unordered_map<int,int> imap;
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(isl[r][c]!=0) imap[isl[r][c]]++;
            }
        }
        int ans = 0; //Max Island size .... Entire grid might be 0;
        for(int ctr = 1 ; ctr<=ictr ; ctr++){
            ans = max(ans,imap[ctr]);
        }
        // Now toggling

        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(grid[r][c]==0){
                    set<int> hashset;
                    for(int di = 0 ; di < 4 ; di++){
                        int adjR = r + diff[di];
                        int adjC = c + diff[di+1];
                        if(adjR>=0 && adjC>=0 && adjR<R && adjC<C && grid[adjR][adjC]==1){
                            hashset.insert(isl[adjR][adjC]);
                        }
                    }
                
                    int mergecount = 1;
                    for(int island : hashset) mergecount+=imap[island];
                    ans = max(ans,mergecount);
                }
            }
        }
       
        return ans;
    }
};