1class Solution {
2    public String removeDuplicates(String s) {
3        Stack<Character> st = new Stack<>();
4        for(int index = 0 ; index < s.length() ; index++){
5            char ch  = s.charAt(index);
6            if(!st.isEmpty() && st.peek()==ch) st.pop();
7            else st.push(ch);
8        }
9        String result = new String();
10        while(!st.isEmpty()){
11            result+=st.peek();
12            st.pop();
13        }
14        StringBuilder sb = new StringBuilder(result);
15        return sb.reverse().toString();
16    }
17}