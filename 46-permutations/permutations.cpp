class Solution {
public:
vector<vector<int>> res;
    void Solve(int idx,vector<int>& nums)
    {
        if(idx==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            Solve(idx+1,nums);
            swap(nums[i],nums[idx]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        Solve(0,nums);
        return res;

        
    }
};