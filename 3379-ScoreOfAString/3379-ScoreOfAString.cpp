// Last updated: 3/30/2026, 2:11:16 PM
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i = 1 ; i < s.length() ; i++) score+=abs(s[i] - s[i-1]);
        return score;
    }
};