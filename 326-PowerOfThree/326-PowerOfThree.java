// Last updated: 3/30/2026, 2:13:24 PM
class Solution {
    public boolean isPowerOfThree(int n) {
        if(n==0 || n<0) return false;
        if(1162261467%n==0) return true;
        return false;
    }
}