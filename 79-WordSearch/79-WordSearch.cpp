// Last updated: 3/30/2026, 2:13:54 PM
class Solution {
    int diff[5] = {0,1,0,-1,0};
private:
    bool dfs(int r, int c, int R, int C, vector<vector<char>> &board, string word, int ni){     // ni -> next index
        if(ni==word.size()) return true;
        char ch = board[r][c];
        board[r][c] = '*';              // for backtracking
        for(int di = 0 ; di < 4 ; di++){
            int adjR = r + diff[di];
            int adjC = c + diff[di+1];
            if(adjR >= 0 && adjC >= 0 && adjR < R && adjC < C && board[adjR][adjC]==word[ni]){
                bool found = dfs(adjR, adjC, R, C, board, word, ni+1);
                if(found) return true;
            }
        }
        board[r][c] = ch;
        return false;
    } 
public:
    bool exist(vector<vector<char>>& board, string word) {
        int R = board.size(), C = board[0].size();
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                if(board[r][c] == word[0]){
                    bool found = dfs(r,c,R,C,board,word,1);
                    if(found) return true;
                }
            }
        }
        return false;
    }
};