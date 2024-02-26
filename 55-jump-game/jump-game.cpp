class Solution {
public:
    // int dp[];
    // time complexity : O(n^k)exponential solution
    // top-down approach
    // bool solve(int index, vector<int>& nums) {
    //     if (dp[index] != -1)
    //         return (dp[index] == 0) ? false : true;
    //     if (index >= nums.size() - 1)
    //         return true;

    //     for (int jump = 1; jump <= nums[index]; jump++) {

    //         if (solve(index + jump, nums)) {
    //             dp[index] = 1;
    //             return true;
    //         }
    //     }
    //     dp[index] = 0;
    //     return false;
    // }
    bool canJump(vector<int>& nums) {
        // memset(dp, -1, sizeof(dp));
        // return solve(0, nums);
        int n = nums.size();
        bool dp[n];
        memset(dp,false,sizeof(dp));
        dp[0] = true;
        for(int i=1;i<n;i++)
        {
            int j=i-1;
            while(j>=0)
            {
                if(dp[j]==true && j+nums[j]>=i)
                {
                    dp[i] = true;
                    break;
                }
                j--;
            }

        }
        return dp[n-1];






        // bottom approach



    }
};