1class Solution {
2public:
3    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
4        int left = 0, right = 0;
5        int maxdist = INT_MIN;
6        while(left < nums1.size() && right < nums2.size()){
7            if(left<=right){
8                if(nums1[left] <= nums2[right]){
9                    maxdist = max(maxdist,right-left);
10                    right++;
11                }
12                else{
13                    left++;
14                }
15            }
16            else{
17                right = left;
18            }
19        }
20        return (maxdist!=INT_MIN) ? maxdist : 0;
21    }
22};