// Last updated: 3/30/2026, 2:13:14 PM
class Solution {
    public void reverseString(char[] arr) {
        int left = 0, right = arr.length - 1;
        while(left < right){
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}