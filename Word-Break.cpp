1/*
2Great question which i was able to breakdown and understand thanks to LC_GST
3Approach:
4Initialize a boolean dp array (N+1) -> we are converting the string to an indexed bool array.
5initialize 0th index to true as fallback
6find the longest word in the worddict -> we are using this to find if it exists or no
7put all words in a wordict to a wordset to ensure no duplicates
8
9Find all substring from jth index which are of length i-j -> take an index and look back.
10g
11og
12dog
13when u encounter a valid one check if the start of the substring is initalizaed to true which means we found valid substring
14toggle dp[i] = true
15
16the last element will have the answer to our question where the words in wordict is all present or not.
17return dp[N];
18*/
19class Solution {
20public:
21    bool wordBreak(string s, vector<string>& wordDict) {
22        int N = s.size(); int maxlen = 0;
23        vector<bool> dp(N+1);
24        set<string> wordset;
25        for(string temp: wordDict) {
26            maxlen = max(maxlen,(int)temp.size());
27            wordset.insert(temp);
28        }
29        dp[0] = true;
30        for(int i = 1 ; i <= N ; i++){
31            for(int j = i - 1; j >= max(0,i-maxlen) ; j--){
32                if(dp[j] && wordset.contains(s.substr(j,i-j))){
33                    dp[i] = true;
34                }
35            }
36        }
37        return dp[N];
38    }
39};
40
41