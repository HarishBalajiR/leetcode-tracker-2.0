// Last updated: 3/30/2026, 2:14:41 PM
class Solution {
    public int reverse(int x) {
        long rev = 0 , rem = 0;
        int sign = 1;
        if(x < 0) sign = -1;
        x = Math.abs(x);
        while(x!=0){
            rem = x%10;
            rev = rev*10 + rem;
            x/=10;
        }
        if(rev > Math.pow(2,31) - 1 || rev < Math.pow(2,-31)) return 0;
        return (int)rev*sign;
    }
}