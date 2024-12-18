class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> solvion;

        for(int i=0 ; i<prices.size()-1 ; i++)
        {
            bool isFound = false;
            for(int  j=i+1 ; j<prices.size() ; j++)
            {
                if(prices[j] <= prices[i])
                {
                    solvion.push_back(prices[i]-prices[j]);
                    isFound = true;
                    break;
                }
            }
            if(isFound == false)
            {
                 solvion.push_back(prices[i]);

            }
        }
        int n = prices.size();

        solvion.push_back(prices[n-1]);

        return solvion;
        
    }
};