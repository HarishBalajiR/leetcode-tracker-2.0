# Last updated: 3/30/2026, 2:10:38 PM
class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        alphabets = ['z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a',]
        s = ""
        for word in words:
            weight = 0
            for ch in word:
                if(ch.islower()): index=ord(ch)-97
                else: index=ord(ch)-65
                weight+=weights[index]
            s+=alphabets[weight%26]
        return s
                
                