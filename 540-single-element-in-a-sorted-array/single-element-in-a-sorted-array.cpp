class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int i=1;
        while(i<nums.size())
        {
            nums[0]^=nums[i++];
        }
        return nums[0];
    }
};