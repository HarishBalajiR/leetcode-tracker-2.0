1class Solution:
2    def secondHighest(self, s: str) -> int:
3        digits = list()
4        for ch in s:
5            if(ch.isdigit()):
6                digits.append(int(ch))
7        fmax,smax = -1,-1
8        for index in range(len(digits)):
9            if(digits[index] > fmax):
10                smax = fmax
11                fmax = digits[index]
12            elif(digits[index] < fmax and digits[index] > smax):
13                smax = digits[index]
14        return smax
15        