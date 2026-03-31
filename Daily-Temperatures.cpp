/*Need Revision.
When we encounter the next greater temperature than the latest element pushed (top)
populate ans[top element] = no. of days (curridx - that idx)
pop until we get a top which is > than current

push each index
return ans.
*/
1 class Solution {
2 public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int> ans(n,0);
6        stack<int> st;
7        for(int index = 0 ; index < n ; index++){
8            while(!st.empty() && temperatures[st.top()]<temperatures[index]){
9                ans[st.top()] = index - st.top();
10                st.pop();
11            }
12            st.push(index);
13        }
14        return ans; 
15    }
16};
