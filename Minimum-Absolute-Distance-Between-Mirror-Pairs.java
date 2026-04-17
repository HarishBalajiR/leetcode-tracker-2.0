1class Solution {
2private:
3    int revnum(int num){
4        int result = 0;
5        while(num){
6            result = result*10 + num%10;
7            num/=10;
8        }
9        return result;
10    }
11public:
12    int minMirrorPairDistance(vector<int>& nums) {
13        unordered_map<int,int> umap;
14        int mindist = INT_MAX;
15        for(int index = 0 ; index < nums.size() ; index++){
16            if(umap.contains(nums[index])){
17                mindist = min(mindist,abs(umap[nums[index]] - index));
18            }
19            umap[revnum(nums[index])] = index;
20        }
21        return (mindist!=INT_MAX ? mindist : -1);
22    }
23};