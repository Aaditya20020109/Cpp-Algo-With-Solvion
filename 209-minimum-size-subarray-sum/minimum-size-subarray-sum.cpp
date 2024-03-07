class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int sum =0;
        int i=0;
        int mini = INT_MAX;
        for(int j=0;j<nums.size();j++)
        {
            sum = sum+nums[j];
            if(sum>=target)
            {
                mini = min(mini,j-i+1);

            }
            while(sum>=target)
            {
                sum = sum-nums[i++];
                if(sum>=target)
                {

                mini = min(mini,j-i+1);
                }

            }
        }
        return mini==INT_MAX ?0:mini;

        
    }
};