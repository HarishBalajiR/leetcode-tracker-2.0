1class Solution {
2    static int[] diff = {0,1,0,-1,0};
3    private void dfs(int[][] image, int sr, int sc, int R, int C, int og, int newcolor){
4        if(image[sr][sc] == newcolor) return;
5        image[sr][sc] = newcolor;
6        for(int di = 0 ; di < 4 ; di++){
7            int adjR = sr + diff[di], adjC = sc + diff[di+1];
8            if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && image[adjR][adjC] == og){
9                dfs(image,adjR,adjC,R,C,og,newcolor);
10            }
11        }
12    }
13    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
14        int R = image.length, C = image[0].length;
15        dfs(image,sr,sc,R,C,image[sr][sc],color);
16        return image;
17    }
18}