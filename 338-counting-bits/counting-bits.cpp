class Solution {
public:
    int count_setbits(int n)
    {
        int set_bits =0;
        while(n!=0)
        {
            set_bits++
            ;
            n = n&(n-1);
        }
        return set_bits;
    }
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        for(int i=0;i<res.size();i++)
        {
            res[i] = count_setbits(i);
        }
        return res;
        
    }
};