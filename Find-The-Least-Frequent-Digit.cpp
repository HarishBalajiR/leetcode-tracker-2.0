1class Solution {
2public:
3    int getLeastFrequentDigit(int n) {
4        unordered_map<int,int> umap;
5        while(n!=0){
6            int digit = n%10;
7            umap[digit]++;
8            n/=10;
9        }
10        int mnfreq = INT_MAX;
11        for(pair<int,int> val : umap){
12            mnfreq = min(mnfreq,val.second);
13        }
14        int mndigit = 10;
15        for(auto val : umap){
16            if(val.second == mnfreq){
17                mndigit = min(mndigit,val.first);
18            }
19        }
20        return mndigit;
21    }
22};