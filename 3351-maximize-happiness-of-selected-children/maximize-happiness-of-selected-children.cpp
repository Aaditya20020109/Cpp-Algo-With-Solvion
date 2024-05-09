class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
         long long ans = 0;
        int minus = 0;
        int j = happiness.size()-1;

        sort(begin(happiness) , end(happiness));

        while(k>0 && j>=0)
        {

            int decre_byOne = happiness[j] - minus;
            
            if(decre_byOne >= 0)
            {
                ans += decre_byOne;
                minus+=1;
                k-=1;
                j-=1;
            }else{
                break;
            }
        }

        return ans;
        
    }
};