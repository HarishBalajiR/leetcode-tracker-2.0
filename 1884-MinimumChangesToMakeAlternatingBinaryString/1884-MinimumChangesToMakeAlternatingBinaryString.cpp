// Last updated: 3/30/2026, 2:12:03 PM
class Solution {
public:
    int minOperations(string s) {
        int opcount = 0;
        int n = s.size();
        for(int index = 0 ; index < n ; index++){
            if(s[index]=='0' && index%2!=0) opcount++;
            else if(s[index]=='1' && index%2==0) opcount++;
        }
        return min(opcount, n-opcount);
    }
};