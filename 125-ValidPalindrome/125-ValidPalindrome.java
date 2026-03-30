// Last updated: 3/30/2026, 2:13:48 PM
class Solution {
    public boolean isPalindrome(String s) {
        int left = 0,right = s.length() - 1;
        char[] arr = s.toCharArray();
        while(left<right){
            while(left < right && (!isalpha(arr[left]))) left++;
            while(right > left && (!isalpha(arr[right]))) right--;
            if(Character.toLowerCase(arr[left]) != Character.toLowerCase(arr[right])) return false;
            left++;
            right--;
        }
        return true;
    }
    private boolean isalpha(char ch){
        if(ch>='A' && ch<='Z') return true;
        else if(ch>='a' && ch<='z') return true;
        else if(ch>='0' && ch<='9') return true;
        else return false;
    }
}