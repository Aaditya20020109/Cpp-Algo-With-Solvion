class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans =0;
        
        while(numBottles!=0)
        {
            if(numBottles<numExchange)
            {
                ans+=numBottles;
                break;
            }
            int x = numBottles / numExchange;


            ans+=( x * numExchange);


            numBottles = numBottles % numExchange;
            numBottles += x;
        }
        return ans;
    }
};