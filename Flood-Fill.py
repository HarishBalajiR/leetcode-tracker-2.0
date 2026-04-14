1class Solution {
2private:
3    vector<int> diff = {0,1,0,-1,0};
4    void dfs(vector<vector<int>>& image, int sr, int sc, int R, int C, int orgcolor, int newcolor){
5        if(image[sr][sc] == newcolor) return;
6        image[sr][sc] = newcolor;
7        for(int di = 0 ; di < 4 ; di++){
8            int adjR = sr + diff[di];
9            int adjC = sc + diff[di+1];
10            if(adjR>=0 && adjR<R && adjC>=0 && adjC<C && image[adjR][adjC] == orgcolor){
11                dfs(image,adjR,adjC,R,C,orgcolor,newcolor);
12            }
13        }
14    }
15public:
16    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
17        int R = image.size(), C = image[0].size();
18        dfs(image,sr,sc,R,C,image[sr][sc],color);
19        return image;
20    }
21};