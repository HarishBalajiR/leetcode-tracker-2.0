1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        int N = nums.size();
5        if(N==1) return nums;
6        vector<int> ans;
7        ans.push_back(nums[0]);
8        vector<int> prefixmax(N,0),suffixmax(N,0);
9        prefixmax[0] = nums[0];
10        suffixmax[N-1] = nums[N-1];
11        for(int index = 1 ; index < N ; index++){
12            prefixmax[index] = max(prefixmax[index-1],nums[index]);
13        }
14        for(int index = N-2 ; index >= 0 ; index--){
15            suffixmax[index] = max(suffixmax[index+1],nums[index]);
16        }
17        for(int index = 1 ; index+1 < N ; index++){
18            if(nums[index] > prefixmax[index-1] || nums[index] > suffixmax[index+1]) ans.push_back(nums[index]);
19        }
20        ans.push_back(nums[N-1]);
21        return ans;
22    }
23};