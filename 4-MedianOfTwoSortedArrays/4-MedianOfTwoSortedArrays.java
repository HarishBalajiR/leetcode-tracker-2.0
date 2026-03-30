// Last updated: 3/30/2026, 2:14:40 PM
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int fptr = 0, sptr = 0, k = 0;
        int len1 = nums1.length, len2 = nums2.length;
        int[] arr = new int[len1+len2];
        while(fptr < len1 && sptr < len2){
            if(nums1[fptr] < nums2[sptr])
            {
                arr[k] = nums1[fptr];
                k++;
                fptr++;
            }
            else
            {
                arr[k] = nums2[sptr];
                k++;
                sptr++;
            }
        }
        for(fptr=fptr ; fptr < len1 ; fptr++){
            arr[k] = nums1[fptr];
            k++;
        }
        for(sptr=sptr ; sptr < len2 ; sptr++){
            arr[k] = nums2[sptr];
            k++;
        }
        if(k%2!=0) return arr[k/2];
        else{
            return (arr[k/2] + arr[k/2 - 1])/2.0;
        }
    }
}