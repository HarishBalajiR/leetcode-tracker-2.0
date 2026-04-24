1class Solution {
2public:
3    int getLeastFrequentDigit(int n) {
4        int freq[10] = {0};
5        while(n>0){
6            freq[n%10]++;
7            n/=10;
8        }
9        int mindigit = INT_MAX,minfreq = INT_MAX;
10        for(int digit = 0 ; digit < 10 ; digit++){
11            if(freq[digit] < minfreq && freq[digit]!=0){
12                minfreq = freq[digit];
13                mindigit = digit;
14            }
15        }
16        return mindigit;
17    }
18};