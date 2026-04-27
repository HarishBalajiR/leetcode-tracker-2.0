1class Solution {
2private:
3    bool isMonobit(int n){
4        int rem = n%2;
5        n/=2;
6        while(n>=1){
7            if(n%2!=rem) return false;
8            n/=2;
9        }
10        return true;
11    }
12public:
13    int countMonobit(int n) {
14        int count = 0;
15        for(int num = 0 ; num <= n ; num++){
16            if(isMonobit(num)) count++;
17        }
18        return count;
19    }
20};