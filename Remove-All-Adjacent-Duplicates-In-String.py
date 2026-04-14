1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        for(char ch : s){
6            if(!st.empty() && st.top()==ch) st.pop();
7            else st.push(ch);
8        }
9        string result;
10        while(!st.empty()){
11            result+=st.top();
12            st.pop();
13        }
14        reverse(result.begin(),result.end());
15        return result;
16    }
17};