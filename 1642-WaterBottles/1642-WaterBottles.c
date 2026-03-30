// Last updated: 3/30/2026, 2:12:19 PM
int numWaterBottles(int numBottles, int numExchange) {
    return numBottles + (numBottles-1)/(numExchange-1);
}