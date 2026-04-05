1/*
2Sliding Window Basics.
3Fixed Size -> index+3
4Check for distinct characters -> only 3 so we can check like that.
5*/
6class Solution {
7public:
8    int countGoodSubstrings(string s) {
9        int count = 0,n = s.size();
10        for(int index = 0 ; index+3 <= s.size() ; index++){
11            if(s[index]!=s[index+1] && s[index+1]!=s[index+2] && s[index]!=s[index+2]) count++;
12        }
13        return count;
14    }
15};