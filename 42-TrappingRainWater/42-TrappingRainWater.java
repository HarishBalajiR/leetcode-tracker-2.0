// Last updated: 3/30/2026, 2:14:11 PM
class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int[] lefth = new int[n];
        int[] righth = new int[n];
        int maxheight = 0;
        for(int index = 0 ; index < n ; index++){
            if(height[index] > maxheight) maxheight = Math.max(maxheight,height[index]);
            lefth[index] = maxheight;
        }
        maxheight = 0;
        for(int index = n-1 ; index>=0 ; index--){
            if(height[index] > maxheight) maxheight = Math.max(maxheight,height[index]);
            righth[index] = maxheight;
        }
        int watercount = 0;
        for(int index = 0 ; index < n ; index++){
            watercount += Math.min(lefth[index],righth[index]) - height[index];
        }
        return watercount;
    }
}