1/*
2Use a single hashmap to track the charaacters in boths strings
3when the charaacters have equal frequency in otbh string -> anagram
4the hashmap will always have 0 on all elements
5since we ++ and -- 
6so if anythings not 0 it doesnt have eequal frequency -> return false
7return true
8*/
9class Solution {
10public:
11    bool isAnagram(string s, string t) {
12        unordered_map<int,int> hashmap;
13        for(char ch : s) hashmap[ch]++;
14        for(char ch : t) hashmap[ch]--;
15        for(auto val : hashmap) if(val.second!=0) return false;
16        return true;
17    }
18};