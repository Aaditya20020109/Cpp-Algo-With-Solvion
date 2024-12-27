class Solution {
public:
    unordered_map<string , int> memo;
    int solve(vector<int> nums , int idx , int n , int target , int res  )
    {
        if( idx == n)
        {
            if(res == target)
            {
                return 1;

            }else{
                return 0;
            }
            
        }

        string key = to_string(idx)+":"+to_string(res);
        if(memo.count(key))
        {
            return memo[key];
        }

        int count = 0;

        count+=solve(nums ,idx+1 ,  n , target , res+nums[idx]);
        count+=solve(nums , idx+1 , n , target , res-nums[idx]);
        return memo[key] = count;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = solve(nums,0 , n ,target , 0 );
        return cnt;
        
    }
};