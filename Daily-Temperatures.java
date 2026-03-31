1class Solution {
2    public int[] dailyTemperatures(int[] temperatures) {
3        int n = temperatures.length;
4        int[] ans = new int[n];
5        Stack<Integer> st = new Stack<>();
6        for(int index = 0 ; index < n ; index++){
7            if(st.isEmpty()) st.push(index);
8            else{
9                while(!st.isEmpty() && temperatures[st.peek()] < temperatures[index]){
10                    ans[st.peek()] = index - st.peek();
11                    st.pop();
12                }
13                st.push(index);
14            }
15        }
16        return ans;
17    }
18}