class Solution {
public:
    void Solve(vector<int> nums,vector<vector<int>>& res,vector<int>& temp,unordered_set<int> s)
    // TC: O(n*n!)
    {
        if(temp.size()==nums.size())
        {
            res.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i])==s.end())
            {
                temp.push_back(nums[i]);
                s.insert(nums[i]);
                Solve(nums,res,temp, s);
                temp.pop_back();
                s.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> temp;
        vector<vector<int>> res;
        Solve(nums,res,temp,s);
        return res;

        
    }
};