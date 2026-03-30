// Last updated: 3/30/2026, 2:14:24 PM
class Solution {
    public int strStr(String haystack, String needle) {
        int hayptr = 0, needptr = 0;
        char[] hayarr = haystack.toCharArray();
        char[] needarr = needle.toCharArray();
        for(int index = 0 ; index < hayarr.length ; index++){
            if(hayarr[index]==needarr[needptr]){
                hayptr = index;
                while(hayptr < haystack.length() && needptr < needle.length() && hayarr[hayptr]==needarr[needptr]){
                    hayptr++;
                    needptr++;
                }
                if(needptr==needarr.length) return index;
                else needptr = 0;
            }
        }
        return -1;
    }
}