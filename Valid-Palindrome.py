1'''
2Learnt that isalnum also covers isspace
3Same approach as others.
4'''
5class Solution:
6    def isPalindrome(self, s: str) -> bool:
7        left, right = 0, len(s) - 1
8        while(left < right):
9            while(left < right and not s[left].isalnum()): left+=1
10            while(right > left and not s[right].isalnum()): right-=1
11            if(s[left].lower() != s[right].lower()): return False
12            left+=1
13            right-=1
14        return True 