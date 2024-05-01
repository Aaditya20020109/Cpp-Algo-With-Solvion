class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int operation = 0;
        for(int bit = 0; bit < 32 ; bit++)
        {
            int xor_1 = 0;
            for(int ele: nums)
            {
                xor_1^=(ele&(1<<bit));

            }
            int k_Bit_val = k&(1<<bit) ;
            if(k_Bit_val != xor_1)
            {
                operation+=1;
            }
        }

        return operation;


    }
};