1/*
2O(N) solution.
3[r][r] -> primary diagonal
4[R-r-1] -> secondary diagonal 
5
6if matrix is odd length -> middle elem gets added twice
7so remove it 
8
9return ans
10*/
11class Solution {
12    public int diagonalSum(int[][] mat) {
13        int ans = 0;
14        int R = mat.length;
15        for(int r = 0 ; r < R ; r++){
16            ans+=mat[r][r];
17            ans+=mat[R-r-1][r];
18        }
19        if(R%2!=0) ans-=mat[R/2][R/2];
20        return ans;
21    }
22}