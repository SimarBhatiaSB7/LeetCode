class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int numAvailable = numBottles;
        int total = numBottles;
        int numEmpty = total;

        while(numEmpty >= numExchange){
            numAvailable = numEmpty / numExchange;
            total += numAvailable;
            numEmpty = numAvailable + (numEmpty % numExchange);
        }

        return total;
    }
};