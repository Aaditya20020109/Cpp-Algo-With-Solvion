class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    int i=0;
    for(i=0;i<nums.size()-2;i++)
    {
        if(i>0 && nums[i]==nums[i-1])continue;
        int j=i+1,k=nums.size()-1;
        while(j<k)
        {
              int sum = nums[i]+nums[j]+nums[k];
             if(sum==0) {
                 vector<int> v = {nums[i],nums[j++],nums[k--]};
                res.push_back(v);

                // remove duplicate 
                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k+1])k--;
                
             }
              else if(sum>0)k--;
              else if(sum<0)j++;
               
              
        }
    }
    return res;
    }
};