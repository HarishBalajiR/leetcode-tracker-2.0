// Last updated: 3/30/2026, 2:13:09 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = '\0';
        for(char ch : s) result^=ch;
        for(char ch : t) result^=ch;
        return result;
    }
};