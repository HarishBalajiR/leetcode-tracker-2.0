// Last updated: 3/30/2026, 2:11:42 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(string st : operations){
            result+= st[1] == '+' ? 1 : -1;
        }
        return result;
    }
};