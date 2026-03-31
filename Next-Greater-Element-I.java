1class Solution {
2    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
3        int n1 = nums1.length, n2 = nums2.length;
4        List<Integer> arr = new ArrayList<>();
5        for(int idx1 = 0 ; idx1 < n1 ; idx1++){
6            boolean flag = false;
7            for(int idx2 = 0 ; idx2 < n2 ; idx2++){
8                if(nums1[idx1] == nums2[idx2]){
9                    int k = idx2;
10                    while(k < n2){
11                        if(nums2[k] > nums2[idx2]){
12                            arr.add(nums2[k]);
13                            flag = true;
14                            break;
15                        }
16                        k++;
17                    }
18                    if(!flag) arr.add(-1);
19                }
20            }
21        }
22        int[] ans = new int[n1];
23        for(int index = 0 ; index < n1 ; index++) ans[index] = arr.get(index);
24        return ans;
25    }
26}