// Last updated: 3/30/2026, 2:12:54 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;
        char result;
        bool found = false;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(letters[mid]>target){
                result = letters[mid];
                right = mid - 1;
                found = true;
            }
            else if(letters[mid]<=target){
                left = mid + 1;
            }
        }
        return found ? result : letters[0];
    }
};