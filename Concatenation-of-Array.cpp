1/*
2Basic Logical Question.
3We iterate from 0 to 2*size because when we concatenate the result vector size is size + size = 2*size
4when our index goes out of bounds we need to start over so %size
5*/
6class Solution{
7public:
8    vector<int> getConcatenation(vector<int>& nums) {
9        vector<int> result(2*nums.size(),0);
10        for(int index = 0 ; index < 2*nums.size() ; index++) result[index] = nums[index%nums.size()];
11        return result;
12    }
13};