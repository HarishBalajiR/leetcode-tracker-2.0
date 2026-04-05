1/*
2get the first subarray of size k and count it if sum/k >= threshold
3now start from k to size
4add the next element to the window and remove the first element from the window to maintain window length
5check if window sum/k >= threshold ===> count++
6*/
7class Solution {
8    public int numOfSubarrays(int[] arr, int k, int threshold) {
9        int count = 0,sum = 0;
10        for(int index = 0 ; index < k ; index++) sum+=arr[index];
11        if(sum/k >= threshold) count++;
12        for(int index = k ; index < arr.length ; index++){
13            sum+=arr[index];
14            sum-=arr[index-k];
15            if(sum/k >= threshold) count++;
16        }
17        return count;
18    }
19}