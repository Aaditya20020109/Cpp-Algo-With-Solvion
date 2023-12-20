class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int chocolatesPrices = prices[0]+prices[1];
        if(chocolatesPrices<=money)return (money-chocolatesPrices);
        return money;
        
    }
};