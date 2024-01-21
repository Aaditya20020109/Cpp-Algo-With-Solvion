class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans =nums[0];
        int n = nums.size();
        int mini_2 = INT_MAX;
        int mini_3 = INT_MAX;
        int j=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i] < mini_2)
            {
                mini_2 = nums[i];
                j =i;

            }
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i]< mini_3 && i!=j)
            {
                mini_3 = nums[i];
            }

        }
        return ans+(mini_2+mini_3);
       
       
    }
};