// Last updated: 3/30/2026, 2:10:22 PM
class Solution {
public:
    int firstMatchingIndex(string s) {
        for(int index = 0 ; index < s.size() ; index++){
            if(s[index]==s[s.size()-index-1]) return index;
        }
        return -1;
    }
};