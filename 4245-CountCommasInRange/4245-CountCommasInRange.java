// Last updated: 3/30/2026, 2:10:26 PM
class Solution {
    public int countCommas(int n) {
        if(n<1000) return 0;
        else return n - 999;
    }
}