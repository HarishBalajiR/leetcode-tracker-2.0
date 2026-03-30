// Last updated: 3/30/2026, 2:14:08 PM
class Solution {
    public void rotate(int[][] matrix) {
        int[][] temp = new int[21][21];
        int i = 0;
        for(i = 0 ; i < matrix.length ; i++)
        {
            for(int j = 0 ; j < matrix.length ; j++)
            {
                temp[i][j] = matrix[j][i];
            }
        }
        for(int row = 0 ; row < matrix.length/2 ; row++)
        {
            for(int col = 0 ; col < matrix.length ; col++)
            {
                int tem = temp[col][row];
                temp[col][row] = temp[col][matrix.length-row-1];
                temp[col][matrix.length-row-1] = tem;
            }
        }
        for(int row = 0 ;row < matrix.length ; row++)
        {
            for(int col = 0 ; col < matrix.length ; col++)
            {
                matrix[row][col] = temp[row][col];
            }
        }
    }
}