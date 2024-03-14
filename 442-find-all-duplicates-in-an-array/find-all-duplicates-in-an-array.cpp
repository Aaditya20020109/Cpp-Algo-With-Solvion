class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==0)return {};
        vector<int> ans;
        int i=0;
        while(i<n)
        {
            if(i<(n-1) && nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
                i+=2;
            }
            else
            {
                i++;
            }
            
        }
        return ans;
    }
};