// Last updated: 3/30/2026, 2:12:21 PM
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] arr = new int[2 * n];
        int x = 0, y = n;
        int flag = 1;
        for (int i = 0; i < 2 * n; i++) {
            if(i%2==0)
            { 
                arr[i] = nums[x];
                x++;
            }
            else 
            {
                arr[i] = nums[y];
                y++;
            }
        }
        return arr;
    }
}