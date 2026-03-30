// Last updated: 3/30/2026, 2:12:48 PM
class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int left = 0 , right = letters.length - 1;
        boolean found = false;
        char result = '\0';
        while(left<=right){
            int mid = left + (right - left)/2;
            if(letters[mid] > target){
                result = letters[mid];
                right = mid - 1;
                found = true;
            }
            else{
                left = mid + 1;
            }
        }
        return found==true ? result : letters[0];
    }
}