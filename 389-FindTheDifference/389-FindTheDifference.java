// Last updated: 3/30/2026, 2:13:13 PM
class Solution {
    public char findTheDifference(String s, String t) {
        char result = '\0';
        for(char ch: s.toCharArray()) result^=ch;
        for(char ch:t.toCharArray()) result^=ch;
        return result;
    }
}