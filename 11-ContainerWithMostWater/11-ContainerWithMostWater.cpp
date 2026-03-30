// Last updated: 3/30/2026, 2:14:31 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n -1;
        int maxwater = 0;
        while(left < right){
            int currwater = min(height[left],height[right]) * (right-left);
            maxwater = max(maxwater,currwater);
            if(height[left] <= height[right]) left++;
            else right--;
        }
        return maxwater;
    }
};