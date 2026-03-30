// Last updated: 3/30/2026, 2:10:48 PM
class Solution {
public:
    string reversePrefix(string s, int k) {
        string substring = s.substr(0,k);
        reverse(substring.begin(),substring.end());
        return substring + s.substr(k,s.size());
    }
};