// Last updated: 3/30/2026, 2:13:56 PM
int maxProfit(int* prices, int pricesSize) {
    int sumprofit = 0;
    for(int index = 1 ; index < pricesSize ; index++){
        int profit = prices[index] - prices[index-1];
        if(profit > 0) sumprofit+=profit;
    }
    return sumprofit;
}