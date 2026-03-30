// Last updated: 3/30/2026, 2:14:28 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayptr = 0, needptr = 0;
        for(int index = 0 ; index < haystack.size() ; index++){
            if(haystack[index]==needle[needptr]){
                hayptr = index;
                while(haystack[hayptr]==needle[needptr] && needptr < needle.size()){
                    hayptr++;
                    needptr++;
                }
                if(needptr==needle.size()) return index;
                else{
                    needptr = 0;
                }
            }
        }
        return -1;
    }
};