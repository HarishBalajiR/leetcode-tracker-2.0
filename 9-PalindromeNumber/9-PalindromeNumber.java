// Last updated: 3/30/2026, 2:14:39 PM
class Solution {
    public boolean isPalindrome(int x) {
        if(x==0) return true;
        if(x<0) return false;
        if(x%10==0) return false;
        if(x<10) return true;
        String s = Integer.toString(x);
        char[] arr = s.toCharArray();
        int l = 0 , r = s.length() - 1;
        while(l<r){
            if(arr[l]!=arr[r]) return false;
            l++;
            r--;
        }
        return true;
    }
}