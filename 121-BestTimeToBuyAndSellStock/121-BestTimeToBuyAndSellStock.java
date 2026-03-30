// Last updated: 3/30/2026, 2:13:51 PM
class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int left = 0 , right = 1;
        int maxprofit = 0;
        while(right < n){
            int total = prices[right] - prices[left];
            if(total < 0){
                left = right;
                continue;
            }
            maxprofit = Math.max(maxprofit,total);
            right++;
        }
        return maxprofit;
    }
}