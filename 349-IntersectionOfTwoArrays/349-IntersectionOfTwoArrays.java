// Last updated: 3/30/2026, 2:13:12 PM
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set = new HashSet<>();
        for(int num : nums1) set.add(num);
        ArrayList<Integer> arr = new ArrayList<>();
        for(int num : nums2){
            if(set.contains(num)){
                arr.add(num);
                set.remove(num);
            }
        }
        int[] result = new int[arr.size()];
        int idx = 0;
        for(int num : arr){
            result[idx] = num;
            idx++;
        }
        return result;
    }
}