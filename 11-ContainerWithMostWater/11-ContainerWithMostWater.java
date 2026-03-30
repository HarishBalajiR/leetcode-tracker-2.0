// Last updated: 3/30/2026, 2:14:36 PM
class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int left = 0 , right = n - 1;
        int maxwater = 0;
        while(left < right){
            int currwater = Math.min(height[left],height[right]) * (right - left);
            maxwater = Math.max(maxwater,currwater);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxwater;
    }
}