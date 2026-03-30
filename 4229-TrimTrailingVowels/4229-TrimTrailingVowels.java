// Last updated: 3/30/2026, 2:10:34 PM
class Solution {
    public String trimTrailingVowels(String s) {
        String result = "";
        char[] arr = s.toCharArray();
        int right = arr.length - 1;
        while(true && right>=0){
            if(arr[right]=='a' || arr[right]=='e' || arr[right]=='o' || arr[right]=='i' || arr[right]=='u') right--;
            else break;
        }
        if(right==0){
            if(s.length()==1){
                if(arr[0]=='b') return s;
                else return "";
            }
            else{
                result+=arr[0];
                return result;
            }
        }
        else if(right==-1) return "";
        else{
            for(int left = 0 ; left <= right ; left++) result+=arr[left];
        }
        return result;
    }
}