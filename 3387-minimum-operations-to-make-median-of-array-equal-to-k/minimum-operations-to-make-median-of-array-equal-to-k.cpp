class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {

        // for both odd even length arrays, median will be mid element in sorted array
        // [0,n/2-1]: check for any number greater than k
        // [n/2+1,n-1]: check for any number smaller than k
        int n = nums.size(); 

        sort(nums.begin()  , nums.end());
        int median = nums[n/2];



        long long ans = abs(median - k);

        for(int i = 0; i<n/2 ; i++)
        {
            if(nums[i] > k)
            {
                ans += abs(nums[i] - k);
            }
        }


        for(int j=(n/2)+1; j<n ; j++)
        {
            if(nums[j] < k)
            {
                ans += abs(nums[j] - k);
            }
        }

        return ans;
    }
};