1'''
2Simple map to track character frequenices.
3.get() is used so it does not throw me a keyerror
4same approach in all languages
5'''
6class Solution:
7    def isAnagram(self, s: str, t: str) -> bool:
8        freqdict = dict()
9        for ch in s:
10            freqdict[ch] = freqdict.get(ch,0)+1
11        for ch in t:
12            freqdict[ch] = freqdict.get(ch,0)-1
13        for value in freqdict.values():
14            if(value!=0):
15                 return False
16        return True