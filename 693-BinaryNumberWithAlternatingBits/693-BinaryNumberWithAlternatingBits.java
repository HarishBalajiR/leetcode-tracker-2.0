// Last updated: 3/30/2026, 2:12:50 PM
class Solution {
    public boolean hasAlternatingBits(int n) {
        String s = Integer.toBinaryString(n);
        boolean flag = true;
        int prev = s.charAt(0);
        for(int index = 1 ; index < s.length() ; index++)
        {
            char curr = s.charAt(index);
            if(prev==curr) flag = false;
            prev = curr;
        }
        return flag;
    }
}