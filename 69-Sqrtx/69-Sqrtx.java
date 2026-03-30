// Last updated: 3/30/2026, 2:14:01 PM
class Solution {
    public int mySqrt(int x) {
        if(x<=1) return x;
        int l = 0,r = x;
        int result = 0;
        while(l<=r){
            int mid = l+((r-l)/2);
            long ans =(long) mid*mid;
            if(ans > x) r = mid - 1;
            else if(ans < x){
                result = mid;
                l = mid+1;
            }
            else return mid;
        }
        return result;
    }
}