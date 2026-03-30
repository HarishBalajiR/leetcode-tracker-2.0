// Last updated: 3/30/2026, 2:14:20 PM
class Solution {
    public boolean isValidSudoku(char[][] board) {
        boolean[][] rf = new boolean[9][10];
        boolean[][] cf = new boolean[9][10];
        boolean[][] sf = new boolean[9][10];

        for(int r = 0 ; r < 9 ; r++){
            for(int c = 0 ; c < 9 ; c++){
                if(board[r][c] == '.') continue;
                int digit = board[r][c] - '0';
                int sbindex = (r/3)*3 + (c/3);
                if(rf[r][digit] || cf[c][digit] || sf[sbindex][digit]) return false;
                rf[r][digit] = cf[c][digit] = sf[sbindex][digit] = true;
            }
        }
        return true;
    }
}