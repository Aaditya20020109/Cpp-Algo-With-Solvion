class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res =0;
     
        for(int bit=0;bit<32;bit++)
        {
            
            int ones =0;
            for(int n:nums)
            {
                if((n&(1<<bit))!=0)ones++;
            }
            if(ones%3==1)res = (res|(1<<bit));

        }
        return res;
        
    }
};