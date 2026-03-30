// Last updated: 3/30/2026, 2:10:52 PM
class Solution {
public:
    int maxDistinct(string s) {
        set<char> hashset;
        for(char ch : s) hashset.insert(ch);
        return hashset.size();
    }
};