1/*
2main()
3Integer dp -> Has null values as default
4Used to store previously calculated balloons to not get TLE
5
6burst()
7left > right -> Range is over -> return 0
8dp[left][right]!=null -> value has been previously calculated -> return the dp[left][right]
9
10i = left -> right (Range of balloon bursting)
11currpts => Two ranges which are (left to curr -1 ballon) and (curr + 1 to right baloon)
12
13after all thats calculated the curr baloon cost needs to calculated (last burst)
14which is nums[currballon]*nums[curr - 1 baloon]*nums[curr+1 baloon]
15
16Ternary opertaors are there because what if curr baloon is at index 0 -> to its left theres no baloons so according to statement you need to imagine 1
17same think about if curr baloon is last index
18
19add that points to currpoints and compare them with maxpts
20
21after calculating those add the values to dp so we can use it for later use.
22
23*/
24class Solution {
25    private int burst(int N,Integer dp[][],int nums[],int left,int right){
26        if(left>right) return 0;
27        if(dp[left][right]!=null) return dp[left][right];
28        int maxpts=0;
29        for(int i=left;i<=right;i++){
30            int currpts=burst(N,dp,nums,left,i-1)+burst(N,dp,nums,i+1,right);
31            int lastburst=(left-1>=0?nums[left-1]:1)*nums[i]*(right+1<N?nums[right+1]:1);
32            currpts+=lastburst;
33            maxpts=Math.max(maxpts,currpts);
34        } 
35        dp[left][right]=maxpts;
36        return maxpts;
37    }
38    public int maxCoins(int[] nums) {
39        int N=nums.length;
40        Integer dp[][]=new Integer[N][N];
41        return burst(N,dp,nums,0,N-1);
42    }
43}