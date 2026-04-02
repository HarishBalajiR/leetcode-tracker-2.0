1/*
2Great Question to wrap up april 2
3there are two conditions for it to become false
41. If the character in ransomNote is not in magaize
52. If the character frequency in ransomNote > than that it magazine.
6
7If we are able to do the -- operation without any interference, ransomNote can be constructed using magazine so return true;
8*/
9class Solution {
10public:
11    bool canConstruct(string ransomNote, string magazine) {
12        unordered_map<char,int> hashmap;
13        for(char ch : magazine) hashmap[ch]++;
14        for(char ch : ransomNote){
15            if(hashmap.contains(ch)){
16                if(hashmap[ch]==0) return false;
17                else hashmap[ch]--;
18            }
19            else{
20                return false;
21            }
22        }
23        return true;
24    }
25};