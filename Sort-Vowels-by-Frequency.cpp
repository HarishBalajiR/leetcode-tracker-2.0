1class Solution {
2private:
3    bool isVowel(char ch){
4        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
5    }
6    static bool comparator(tuple<int,int,int> first, tuple<int,int,int> second){
7        if(get<1>(first)!=get<1>(second)) return get<1>(first) > get<1>(second);
8        return get<2>(first) < get<2>(second);
9    }
10public:
11    string sortVowels(string s) {
12        map<char,int> freq;
13        map<char,int> firstocc;
14        vector<tuple<int,int,int>> data;
15        for(int index = 0 ; index < s.size() ; index++){
16            if(isVowel(s[index])){
17                freq[s[index]]++;
18                if(firstocc.find(s[index])==firstocc.end()) firstocc[s[index]] = index; 
19            } 
20        }
21        for(auto val : freq){
22            data.push_back(make_tuple(val.first,val.second,firstocc[val.first]));
23        }
24        sort(data.begin(),data.end(),comparator);
25        //for(auto val : vowelmap) cout << val.first << " " << val.second << endl;
26        string temp;
27        for(auto val : data){
28            int count = get<1>(val);
29            while(count--) temp+=(char)get<0>(val);
30        }
31        string result="";
32        int idx = 0;
33        for(char ch : s){
34            if(isVowel(ch)){
35                result+=temp[idx];
36                idx++;
37            }
38            else result+=ch;
39        }
40        return result;
41    }
42};