// Last updated: 3/30/2026, 2:11:33 PM
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch!='*') st.push(ch);
            else st.pop();
        }
        string result;
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};