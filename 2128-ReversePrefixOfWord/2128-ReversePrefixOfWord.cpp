// Last updated: 3/30/2026, 2:11:48 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int start = 0;
        for(int index = 1 ; index < word.size() ; index++){
            if(word[index]==ch){
                start+=index;
                break;
            }
        }
        if(start==word.size() - 1 && word[0] == ch) return word;
        else{
            string substring = word.substr(0,start+1);
            reverse(substring.begin(),substring.end());
            return substring + word.substr(start+1,word.size() - 1);
        }
    }
};