// Last updated: 3/30/2026, 2:11:07 PM
class Solution {
    public List<Integer> stableMountains(int[] height, int threshold) {
        List<Integer> result = new ArrayList<>();
        int n = height.length;
        for(int index = 1 ; index < n ; index++){
            if(height[index-1] > threshold) result.add(index);
        }
        return result;
    }
}