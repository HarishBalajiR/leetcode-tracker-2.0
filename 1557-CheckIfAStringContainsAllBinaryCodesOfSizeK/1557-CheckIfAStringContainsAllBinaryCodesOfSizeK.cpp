// Last updated: 3/30/2026, 2:12:23 PM
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> set;
        for(int left = 0 ; left+k <= s.size() ; left++){
            set.insert(s.substr(left,k));
        }
        if(set.size()==round(pow(2,k))) return true;
        return false;
    }
};