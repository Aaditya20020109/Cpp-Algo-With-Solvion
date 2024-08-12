class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane algorithme
        int maximumSubarraySum = INT_MIN;
        int sum = 0;
        if(nums.size()  == 1)return nums[0];
    for(int ele : nums)
    {
        sum +=ele;
        maximumSubarraySum = max(maximumSubarraySum , sum);
        if(sum < 0)sum = 0;


    }

    return maximumSubarraySum;

    }
};