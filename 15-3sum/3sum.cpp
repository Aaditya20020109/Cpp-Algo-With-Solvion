class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // test case{-2 , 0 , 0 , 2 , 2}
        vector<vector<int>> res;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i=0 ; i<n-2 ; i++)
        {
            if(i > 0 && nums[i-1]==nums[i]){
                continue;
            }

            int j = i+1 , k = n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0)
                {
                    res.push_back({nums[i],nums[j] , nums[k]});
                     j++;
                     while(j > i+1 && nums[j] == nums[j-1] && j<k )j+=1;
                    //  k-=1;
                  
                }
                else{
                    if(sum > 0)
                    {
                        k-=1;
                    }else{
                        j+=1;
                    }
                }


                 
            }
        }
        return res;
        
    }
};