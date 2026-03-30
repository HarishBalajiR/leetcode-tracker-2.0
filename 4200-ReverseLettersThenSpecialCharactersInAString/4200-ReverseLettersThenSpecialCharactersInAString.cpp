// Last updated: 3/30/2026, 2:10:41 PM
class Solution {
public:
    string reverseByType(string s) {
        vector<char> letters, special;
        for(char ch : s){
            if(ch>='a' && ch<='z') letters.push_back(ch);
            else special.push_back(ch);
        }
        reverse(letters.begin(),letters.end());
        reverse(special.begin(),special.end());
        string result;
        int letterindex = 0, specialindex = 0;
        for(char ch : s){
            if(ch>='a' && ch<='z'){
                result+=letters[letterindex];
                letterindex++; 
            }
            else{
                result+=special[specialindex];
                specialindex++;
            }
        }
        return result;
    }
};