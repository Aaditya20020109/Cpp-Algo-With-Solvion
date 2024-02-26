class Solution {
public:
    int dp[100007];
    
    bool solve(int index, vector<int>& nums) {
        if (dp[index] != -1)
            return (dp[index] == 0) ? false : true;
        if (index >= nums.size() - 1)
            return true;

        for (int jump = 1; jump <= nums[index]; jump++) {

            if (solve(index + jump, nums)) {
                dp[index] = 1;
                return true;
            }
        }
        dp[index] = 0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, nums);
    }
};