1/*
2Same approach as Java.
3*/
4class Solution {
5private:
6    bool isalpha(char ch){
7        if(ch>='A' && ch<='Z') return true;
8        else if(ch>='a' && ch<='z') return true;
9        else if(ch>='0' && ch<='9') return true;
10        return false;
11    }
12public:
13    bool isPalindrome(string s) {
14        int left = 0, right = s.size() - 1;
15        while(left < right){
16            while(left < right && !isalpha(s[left])) left++;
17            while(right > left && !isalpha(s[right])) right--;
18            if(tolower(s[left])!=tolower(s[right])) return false;
19            left++;
20            right--;
21        }
22        return true;
23    }
24};