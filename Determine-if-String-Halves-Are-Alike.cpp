1class Solution {
2private:
3    bool isVowel(char ch){
4        ch = tolower(ch);
5        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
6    }
7public:
8    bool halvesAreAlike(string s) {
9        int lcount = 0,rcount = 0;
10        int N = s.size();
11        for(int index = 0 ; index < N ; index++){
12            if(index<N/2){
13                if(isVowel(s[index])) lcount++;
14            }
15            else{
16                if(isVowel(s[index])) rcount++;
17            }
18        }
19        return lcount==rcount;
20    }
21};