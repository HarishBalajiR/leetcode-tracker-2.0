1class Solution {
2    public boolean checkPerfectNumber(int num) {
3        int sum = 0;
4        for(int divisor = 1 ; divisor <= num/2 ; divisor++){
5            if(num%divisor==0) sum+=divisor;
6        }
7        return sum==num;
8    }
9}