class Solution {
public:
    
     bool Strictly_decreasing(int si,int ei,vector<int> nums)
    {
        for(int i=si+1;i<=ei;i++)
        {
            if(nums[i-1]<=nums[i])return false;
            

        }
        return true;

    }
    bool Strictly_increasing(int si,int ei,vector<int> nums)
    {
        for(int i=si+1;i<=ei;i++)
        {
            if(nums[i-1]>=nums[i])return false;
            

        }
        return true;

    }
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n = nums.size();
        
        int ans =1;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(Strictly_decreasing(i,j,nums)  ||  Strictly_increasing(i,j,nums) )
                {
                    ans = max(ans,j-i+1);

                }

            
            }

        }
        
        
        return ans;
        
    }
};