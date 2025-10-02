class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result=numBottles;
        int emptybottles=numBottles;

        while(emptybottles>=numExchange)
        {
            emptybottles-=numExchange;
            emptybottles++;
            numExchange++;
            result++;
        }

        return result;
    }
};