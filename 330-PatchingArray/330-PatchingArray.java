// Last updated: 3/30/2026, 2:13:23 PM
class Solution {
    public int minPatches(int[] nums, int n) {
        long till = 0;
        int patch = 0;
        for(int index = 0 ; index < nums.length && till < n ; index++){
            while(till < n && till < nums[index]-1){
                patch++;;
                till+=till+1;
            }
            till+=nums[index];
        }
        while(till < n){
            patch++;
            till+=till+1;
        }
        return patch;
    }
}
//MEX -> Maximum EXcluded element -> Smallest element that does not exist in the array.
/* till = 1
1 > 1 ? -> no
till = 6
6 > 5 -> yes
patch++;
16 > 10 -> yes
patch++
*/