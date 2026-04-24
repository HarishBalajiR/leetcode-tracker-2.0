1class Solution {
2    public int getLeastFrequentDigit(int n) {
3        int[] freq = new int[10];
4        Arrays.fill(freq,0);
5
6        while(n>0){
7            freq[n%10]++;
8            n/=10;
9        }
10        int mindig = Integer.MAX_VALUE, minfreq = Integer.MAX_VALUE;
11        for(int digit = 0 ; digit <= 9 ; digit++){
12            if(freq[digit] < minfreq && freq[digit] > 0){
13                minfreq = freq[digit];
14                mindig = digit;
15            }
16        }
17        return mindig;
18    }
19}