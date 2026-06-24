class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty=numBottles, drink=numBottles;
        while (numExchange <= empty) {
            //empty = drink%numExchange ;
            numBottles = empty/numExchange ;
            empty = empty%numExchange ;
            drink += numBottles ;
            empty += numBottles ; 
        }
        return drink;
    }
};