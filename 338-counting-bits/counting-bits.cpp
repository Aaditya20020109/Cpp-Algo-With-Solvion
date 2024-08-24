class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans ;
        int  i =0;
        while(i<=n)
        {
            int total_bits = __builtin_popcount(i);
            ans.push_back(total_bits);
            i+=1;

        }
        return ans;
        
    }
};