class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // TC:O(n)
        // SC:O(1)
        sort(begin(nums),end(nums));
        vector<int> res;
        int i=0;
        int n = nums.size();
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {
                res.push_back(nums[i]);
                i+=2;
            }
            else{
                i+=1;
            }

        }

        return res;
        
    }
};