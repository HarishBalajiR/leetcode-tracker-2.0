1class Solution {
2public:
3    int secondHighest(string s) {
4        vector<int> digits;
5        for(char ch : s){
6            if(isdigit(ch)){
7                digits.push_back(ch-'0');
8            }
9        }
10        int fmax = INT_MIN, smax = INT_MIN;
11        for(int num : digits){
12            if(num > fmax){
13                smax = fmax;
14                fmax = num;
15            }
16            else if(num > smax && num < fmax){
17                smax = num;
18            }
19        }
20        return (smax!=INT_MIN) ? smax : -1;
21    }
22};