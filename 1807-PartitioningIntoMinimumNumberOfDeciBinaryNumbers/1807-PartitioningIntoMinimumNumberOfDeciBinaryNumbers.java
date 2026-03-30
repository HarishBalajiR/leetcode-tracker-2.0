// Last updated: 3/30/2026, 2:12:08 PM
class Solution {
    public int minPartitions(String n) {
        int maxdigit = -1;
        for(char ch : n.toCharArray()){
            int digit = ch - '0';
            if(digit>maxdigit) maxdigit = digit;
        }
        return maxdigit;
    }
}