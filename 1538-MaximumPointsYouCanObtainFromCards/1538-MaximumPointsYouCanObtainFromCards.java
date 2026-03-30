// Last updated: 3/30/2026, 2:12:25 PM
class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int l=k-1 ,lsum=0 ,r=cardPoints.length-1 ,rsum=0 ,maxSum=0;
        for(int i = 0; i < k  ; i++) lsum+=cardPoints[i];
        maxSum = lsum;
        while(l>=0){
            lsum-=cardPoints[l];
            rsum+=cardPoints[r];
            maxSum = Math.max(maxSum,lsum+rsum);
            l--;
            r--;
        }
        return maxSum;
    }
}