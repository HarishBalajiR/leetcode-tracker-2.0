1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n > INT_MAX || n < INT_MIN) return false;
5        if(n<4 && n!=1) return false;
6        while(n%4==0) n/=4;
7        return n==1;
8    }
9};