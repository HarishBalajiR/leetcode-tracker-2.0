1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int N = colors.size();
5        int left = 0, right = N - 1;
6        int maxdist = 0;
7        while(right > left){
8            if(colors[left]!=colors[right]){
9                maxdist = max(maxdist,right - left);
10                left++;
11                right = N - 1;
12            }
13            else right--;
14        }
15        return maxdist;
16    }
17};