class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int left[n];
        int right[n];
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        left[0] = prices[0];
        right[n-1] = prices[n-1];
        for(int i=1;i<n;i++)
        {
            left[i] = min(left[i-1],prices[i]);
        }
        
        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],prices[i]);
        }
        int max_profit = 0;
        for(int i=0;i<n;i++)
        {
            int profit = abs(right[i]-left[i]);
            max_profit = max(profit,max_profit);
        }
        return max_profit;
    }
};