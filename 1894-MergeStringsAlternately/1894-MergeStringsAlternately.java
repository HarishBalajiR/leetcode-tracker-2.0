// Last updated: 3/30/2026, 2:12:00 PM
class Solution {
    public String mergeAlternately(String word1, String word2) {
        int p1 = 0, p2 = 0;
        int len1 = word1.length(),len2 = word2.length();
        String result = "";
        char[] arr1 = word1.toCharArray();
        char[] arr2 = word2.toCharArray();
        while(p1 < len1 && p2 < len2){
            result+= "" + arr1[p1] + arr2[p2];
            p1++;
            p2++;
        }
        System.out.println(p1 + " " + p2);
        if(p1==len1){
            for(int index = p2 ; p2 < len2 ; p2++) result+=""+arr2[p2];
        }
        else{
            for(int index = p1 ; p1 < len1 ; p1++) result+=""+arr1[p1];
        }
        return result;
    }
}