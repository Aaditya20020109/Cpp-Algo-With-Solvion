class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones = 0 , twos = 0 , zeroes = 0;
        for(int n:nums)
        {
            if(n == 0)zeroes+=1;
            else if(n == 1){
                ones+=1;
            }
            else{
                twos+=1;

            }
        }
        int i = 0;
        while(zeroes!=0)
        {
            nums[i++] = 0;
            zeroes-=1;
        }

         while(ones!=0)
        {
            nums[i++] = 1;
            ones-=1;
        }

         while(twos!=0)
        {
            nums[i++] = 2;
            twos-=1;
        }

    }
};