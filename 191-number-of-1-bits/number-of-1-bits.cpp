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
};