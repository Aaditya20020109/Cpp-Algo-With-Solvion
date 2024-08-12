class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
         if(nums[0]<nums[n-1] || n == 1)return nums[0];


            for(int i=1 ; i<n ; i++)
            {
                if(nums[i-1] > nums[i])return nums[i];
            }
    return 0;

            
        
    }
};