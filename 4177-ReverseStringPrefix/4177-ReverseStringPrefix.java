// Last updated: 3/30/2026, 2:10:44 PM
class Solution {
    public String reversePrefix(String s, int k) {
        String substring = s.substring(0,k);
        StringBuilder sb = new StringBuilder(substring);
        return sb.reverse().toString() + s.substring(k,s.length());
    }
}