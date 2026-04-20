1class Solution {
2    public int maxDistance(int[] colors) {
3        int maxdist = 0, N = colors.length;
4        for(int right = N - 1 ; right >= 0 ; right--){
5            if(colors[0]!=colors[right]){
6                maxdist = right;
7                break;
8            }
9        }
10        for(int left = 0 ; left < N ; left++){
11            if(colors[left]!=colors[N-1]){
12                return Math.max(maxdist,N-left-1);
13            }
14        }
15        return 0;
16    }
17}