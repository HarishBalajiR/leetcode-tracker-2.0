1/*
2Learnt this concepts after so many tries.
3Approach:
4Use stack to track nge of each element in nums2 and map to store the nges of each element
5since nums1 is a subset of nums2 we can get nge from map itself
6push it to ans and reutrn it.
7*/
8class Solution {
9public:
10    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
11        vector<int> ans;
12        unordered_map<int,int> nge;
13        stack<int> st;
14        int n = nums2.size();
15        for(int index = n - 1;  index >= 0 ; index--){
16            while(!st.empty() && st.top() < nums2[index]) st.pop();
17            if(st.empty()) nge[nums2[index]] = -1;
18            else{
19                nge[nums2[index]] = st.top();
20            }
21            st.push(nums2[index]);
22        }
23        for(int num : nums1) ans.push_back(nge[num]);
24        return ans;
25    }
26};