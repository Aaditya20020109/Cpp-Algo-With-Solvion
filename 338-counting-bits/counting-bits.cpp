class Solution {
public:

int hammingWeight(int n) {
        int count = 0;
        for(int i =0 ; i<32 ; i++)
        {
            int ith_bitvalue = (1&(n>>i));
            if(ith_bitvalue == 1)
            {
                count+=1;
            }


        }
        return count;
        
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        int i = 0 ;

        while(i<=n)
        {
            int total_bits = hammingWeight(i)
            ;
            ans.push_back(total_bits);

            i++;
        }

        return ans ;
        
    }
};