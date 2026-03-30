// Last updated: 3/30/2026, 2:14:00 PM
class Solution {
    public boolean exist(char[][] board, String word) {
        boolean found = false;
        int R = board.length, C =board[0].length;
        char[] arr = word.toCharArray();
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(board[r][c]==word.charAt(0)){
                    found = find(r,c,R,C,board,arr,1);
                    if(found) return found;
                }
            }
        }
        return found;
    }
    private boolean find(int r, int c, int R, int C, char[][] board,char[] word, int ni){
        int[] diff = {0,1,0,-1,0};
        char ch = board[r][c];
        board[r][c] = '*';
        if(ni==word.length) return true;
        for(int di = 0 ; di < 4 ; di++){
            int adjR = r + diff[di];
            int adjC = c + diff[di+1];
            if(adjR >= 0 && adjC >= 0 && adjR < R && adjC < C && board[adjR][adjC] == word[ni]){
                boolean found = find(adjR, adjC, R, C, board, word, ni+1);
                if(found) return true;
            }
        }
        board[r][c] = ch;
        return false; 
    }
}