1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5        unordered_map<int,int> nge;
6        stack<int> st;
7        int n = nums2.size();
8        for(int index = n - 1;  index >= 0 ; index--){
9            while(!st.empty() && st.top() < nums2[index]) st.pop();
10            if(st.empty()) nge[nums2[index]] = -1;
11            else{
12                nge[nums2[index]] = st.top();
13            }
14            st.push(nums2[index]);
15        }
16        for(int num : nums1) ans.push_back(nge[num]);
17        return ans;
18    }
19};