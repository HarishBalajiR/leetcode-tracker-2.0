1class Solution {
2    public int maxDistance(int[] nums1, int[] nums2) {
3        int left = 0, right = 0;
4        int maxdist = Integer.MIN_VALUE;
5        while(left < nums1.length && right < nums2.length){
6            if(left<=right){
7                if(nums1[left]<=nums2[right]){
8                    maxdist = Math.max(maxdist,right-left);
9                    right++;
10                }
11                else{
12                    left++;
13                }
14            }
15            else{
16                right = left;
17            }
18        }
19        return (maxdist!=Integer.MIN_VALUE) ? maxdist : 0;
20    }
21}