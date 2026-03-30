// Last updated: 3/30/2026, 2:12:32 PM
class Solution {
    public int tribonacci(int n) {
        int a = 0,b = 1,c = 1,d = 0;
        while(n-->0){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return a;
    }
}