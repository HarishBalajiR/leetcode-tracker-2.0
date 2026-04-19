1class Solution:
2    def halvesAreAlike(self, s: str) -> bool:
3        vcount = 0
4        vowels = ['a','e','i','o','u','A','E','I','O','U']
5        for index in range(len(s)//2):
6            if s[index] in vowels:
7                vcount+=1
8        for index in range(len(s)//2,len(s)):
9            if s[index] in vowels:
10                vcount-=1
11        return vcount==0