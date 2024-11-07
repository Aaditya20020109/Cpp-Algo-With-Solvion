class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;

        sort(begin(nums) , end(nums));

        int i = 0;

        int j = 1;

        while(i<nums.size())
        {
            int cnt = 0;
            while(j<nums.size() && nums[i]==nums[j] )
            {
                cnt++;
                j++;

            }
            if(cnt>=n) return nums[i];

            i = j;





        }


        return  -1;



        
    }
};