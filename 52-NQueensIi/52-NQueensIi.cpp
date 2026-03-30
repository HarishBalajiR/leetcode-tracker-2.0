// Last updated: 3/30/2026, 2:14:03 PM
class Solution {
private:
    int count = 0;
    void backtrack(vector<vector<string>> &result, vector<string> &board, int n , int col,vector<bool> &rowflag, vector<bool> &d1flag, vector<bool> &d2flag){
        if(col==n){
            count++;
            result.push_back(board);
            return;
        }
        for(int row = 0 ; row < n ; row++){ 
            int d1 = row + col;
            int d2 = n - 1 - row + col;
            if(!rowflag[row] && !d1flag[d1] && !d2flag[d2]){
                board[row][col] = 'Q';
                rowflag[row] = d1flag[d1] = d2flag[d2] = true;
                backtrack(result,board,n,col+1,rowflag,d1flag,d2flag);
                board[row][col] = '.';
                rowflag[row] = d1flag[d1] = d2flag[d2] = false;
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n,string(n,'.'));
        vector<bool> rowflag(n,false), d1flag(2*n-1,false), d2flag(2*n-1,false);
        backtrack(result, board, n, 0 , rowflag , d1flag, d2flag);
        return count;
    }
};