// Last updated: 3/30/2026, 2:11:55 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size(), len2 = word2.size();
        int index = 0;
        string result = "";
        while(index < len1 && index < len2){
            result+=word1[index];
            result+=word2[index];
            index++;
        }
        while(index < len1){
            result+=word1[index];
            index++;
        }
        while(index < len2){
            result+=word2[index];
            index++;
        }
        return result;
    }
};