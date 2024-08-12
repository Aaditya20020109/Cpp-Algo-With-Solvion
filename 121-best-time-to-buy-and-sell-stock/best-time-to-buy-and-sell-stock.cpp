class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pricesArrLen = prices.size() ;

        vector<int> leftSideGreaterNum(pricesArrLen , 0 );

        vector<int> rightSideGreaterNum(pricesArrLen , 0 );

        // assign the first number leftSideGreaterNum
        leftSideGreaterNum[pricesArrLen-1] = prices[pricesArrLen-1];

        // assign the first number rightSideGreaterNum
        rightSideGreaterNum[0] = prices[0];


        // left ---> right
        for(int i=1 ; i < prices.size() ; i++)
        {

            rightSideGreaterNum[i] = min(rightSideGreaterNum[i-1] , prices[i]);

        }  


        // right --> left

        for(int i= pricesArrLen-2 ; i >=0 ; i--)
        {

            leftSideGreaterNum[i] = max(leftSideGreaterNum[i+1] , prices[i]);


        } 
        int maxProfit = 0;
        for(int i= 0;i<pricesArrLen ; i++)
        {
            maxProfit = max(maxProfit , abs(leftSideGreaterNum[i]-rightSideGreaterNum[i]));

        }   

        return maxProfit;  
    }
};