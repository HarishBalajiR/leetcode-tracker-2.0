// Last updated: 3/30/2026, 2:10:23 PM
class Solution {
    public int minimumIndex(int[] capacity, int itemSize) {
        int n = capacity.length;
        int mincapacity = 101,minindex = -1;
        for(int index = 0 ; index < n ; index++){
            if(capacity[index] >= itemSize && capacity[index] < mincapacity){
                minindex = index;
                mincapacity = capacity[index];
            }
        }
        return minindex;
    }
}