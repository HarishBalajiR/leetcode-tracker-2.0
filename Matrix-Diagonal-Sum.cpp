1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int sum = 0;
5        int R = mat.size(), C = mat[0].size();
6        for(int i = 0 ; i < R ; i++){
7            for(int j = 0 ; j < C ; j++){
8                if(i==j || (i+j)==R-1) sum+=mat[i][j];
9            }
10        }
11        return sum;
12    }
13};