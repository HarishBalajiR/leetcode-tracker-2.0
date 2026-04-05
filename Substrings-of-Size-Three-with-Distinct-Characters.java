1/*
2Sliding Window Basics.
3Fixed Size -> index+3
4Check for distinct characters -> only 3 so we can check like that.
5*/
6class Solution {
7    public int countGoodSubstrings(String s) {
8       int count = 0;
9       char[] arr = s.toCharArray();
10       for(int index = 0 ; index + 3 <= s.length() ; index++){
11            if(arr[index]!=arr[index+1] && arr[index+1]!=arr[index+2] && arr[index]!=arr[index+2]) count++;
12       } 
13       return count;
14    }
15}