1/*
2Basic Logical Question.
3We iterate from 0 to 2*size because when we concatenate the result vector size is size + size = 2*size
4when our index goes out of bounds we need to start over so %size
5*/
6
7class Solution {
8    public int[] getConcatenation(int[] nums) {
9        int n = nums.length;
10        int[] result = new int[n*2];
11        for(int index = 0 ; index < n*2 ; index++) result[index] = nums[index%n];
12        return result;
13    }
14}