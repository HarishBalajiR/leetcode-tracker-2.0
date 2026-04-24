1class Solution {
2    public int furthestDistanceFromOrigin(String moves) {
3        int left = 0,right = 0, steps = 0;
4        for(char ch : moves.toCharArray()){
5            if(ch=='L') left++;
6            else if(ch=='R') right++;
7            else steps++;
8        }
9        return Math.abs(left-right)+steps;
10    }
11}