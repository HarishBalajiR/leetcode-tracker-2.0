1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        int R = text1.size(), C = text2.size();
5        vector<vector<int>> dp(R+1,vector<int>(C+1,0));
6
7        for(int row = 1 ; row < R + 1 ; row++){
8            for(int col = 1 ; col < C + 1 ; col++){
9                if(text1[row-1] == text2[col-1]){
10                    dp[row][col] = dp[row-1][col-1] + 1;
11                }
12                else{
13                    dp[row][col] = max(dp[row-1][col], dp[row][col-1]);
14                }
15            }
16        }
17        return dp[R][C];
18    }
19};
20// matching -> top left + 1
21//not matching -> max(top,left)