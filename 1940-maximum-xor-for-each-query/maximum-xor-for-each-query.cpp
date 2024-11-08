class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

        int xor_1 = 0;

        for(int i:nums)
        {
            xor_1^=i;
        }

        vector<int> res;

        int mask = (1<<maximumBit)-1;

        for(int i = nums.size()-1 ; i>=0 ; i--)
        {

            

           

            // flipping number
            int valid_k = xor_1 ^ mask ;

             xor_1= xor_1 ^ nums[i];

            res.push_back(valid_k);


        }



        return res;




        
    }
};