1/*
2Same approach as C++.
3Refer C++ Notes.
4*/
5class Solution {
6    public int[] dailyTemperatures(int[] temperatures) {
7        int n = temperatures.length;
8        int[] ans = new int[n];
9        Stack<Integer> st = new Stack<>();
10        for(int index = 0 ; index < n ; index++){
11            if(st.isEmpty()) st.push(index);
12            else{
13                while(!st.isEmpty() && temperatures[st.peek()] < temperatures[index]){
14                    ans[st.peek()] = index - st.peek();
15                    st.pop();
16                }
17                st.push(index);
18            }
19        }
20        return ans;
21    }
22}