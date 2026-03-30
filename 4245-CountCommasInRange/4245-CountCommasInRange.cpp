// Last updated: 3/30/2026, 2:10:31 PM
class Solution {
public:
    int countCommas(int num) {
        string s = to_string(num);
        int n = s.size();
        if(n<=3) return 0;
        else{
            return num - 999;
        }
    }
};