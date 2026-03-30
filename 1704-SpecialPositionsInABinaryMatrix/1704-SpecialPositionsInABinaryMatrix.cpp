// Last updated: 3/30/2026, 2:12:09 PM
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int spec = 0;
        int R = mat.size(), C = mat[0].size();
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                bool flag = true;
                if(mat[r][c]==1){
                    for(int row = 0 ; row < R ; row++){
                        if(row!=r && mat[row][c]==1){
                            flag = false;
                            break;
                        }
                    }
                    for(int col = 0 ; col < C ; col++){
                        if(col!=c && mat[r][col]==1){
                            flag = false;
                            break;
                        }
                    }
                    if(flag) spec++;
                }
            }
        }
        return spec;
    }
};