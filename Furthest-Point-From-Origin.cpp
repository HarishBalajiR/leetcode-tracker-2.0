1class Solution {
2public:
3    int furthestDistanceFromOrigin(string moves) {
4        int L = 0, R = 0, dash = 0;
5        for(char ch : moves){
6            if(ch=='L') L++;
7            else if(ch=='R') R++;
8            else dash++;
9        }
10        int pos = abs(L-R);
11        return pos+dash; 
12    }
13};