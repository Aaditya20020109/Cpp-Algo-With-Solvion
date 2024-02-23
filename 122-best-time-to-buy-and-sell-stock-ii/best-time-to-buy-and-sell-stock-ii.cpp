class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j =1;
        int total_profit =0;
        while(j<prices.size())
        {
            int profit = prices[j]-prices[i];
            if(profit>0)total_profit+=profit;

            i++;
            j++;
        }
        return total_profit;
        
    }
};