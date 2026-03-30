// Last updated: 3/30/2026, 2:12:15 PM
class Solution {
    public int numSpecial(int[][] mat) {
        int specialcount = 0;
        int R = mat.length, C = mat[0].length;
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(mat[r][c]==1){
                    int resultrow = r, resultcol = c;
                    boolean flag = true;
                    for(int row = 0 ; row < R ; row++){ 
                        if(row != r && mat[row][c]==1){
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
                    if(flag) specialcount++;
                }
            }
        }
        return specialcount;
    }
}