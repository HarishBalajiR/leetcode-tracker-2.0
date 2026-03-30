// Last updated: 3/30/2026, 2:14:12 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool cf[9][10], rf[9][10], sf[9][10];
        for(int r = 0 ; r < 9 ; r++){
            for(int c = 0 ; c < 9 ; c++){
                if(board[r][c]=='.') continue;
                int digit = board[r][c] - '0';
                int sbindex = (r/3)*3 + c/3;
                if(rf[r][digit] || cf[c][digit] || sf[sbindex][digit]) return false;
                rf[r][digit] = cf[c][digit] = sf[sbindex][digit] = true;
            }
        }
        return true;
    }
};