class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i=0;
        if(nums.size() ==2)return nums;
        sort(begin(nums),end(nums));
        vector<int> ans;
        while(i<nums.size()-1)
        {
            if(ans.size() == 2)
            {
                break;
            }
            if(nums[i+1] != nums[i])
            {
                ans.push_back(nums[i++]);
            }else{
                i+=2;
            }
        }
        if(ans.size()<2)ans.push_back(nums[i]);

        return ans;
        
    }
};