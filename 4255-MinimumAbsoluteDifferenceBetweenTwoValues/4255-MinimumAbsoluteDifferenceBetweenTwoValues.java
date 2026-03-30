// Last updated: 3/30/2026, 2:10:25 PM
class Solution {
    public int minAbsoluteDifference(int[] nums) {
        int min = Integer.MAX_VALUE;
        for(int i = 0 ; i < nums.length ; i++){
            for(int j = 0 ; j < nums.length ; j++){
                if(nums[i]==1 && nums[j] == 2){
                    min = Math.min(min,Math.abs(i-j));
                    System.out.println(""+i+" "+j+" "+min);
                }
            }
        }
        return min!=Integer.MAX_VALUE ? min : -1;
    }
}