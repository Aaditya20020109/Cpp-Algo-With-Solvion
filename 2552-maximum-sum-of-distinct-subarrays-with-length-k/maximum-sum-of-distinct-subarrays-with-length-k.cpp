class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      
      long long sum = 0 , maxi = 0;
      unordered_map<int,int> m;
      for(int i=0 ; i<k ; i++)
      {
        sum+=nums[i];
        m[nums[i]]++;

      }
      
      int left = 0 , right = k-1;
      
      while(right<nums.size())
      {
      if(m.size() == k)
      {
        maxi = max(sum , maxi);

      }
         m[nums[left]]--;
        if(m[nums[left]]==0)
        {
          m.erase(nums[left]);

        }
        sum-=nums[left++];
        right++;
        if(right<nums.size())
        {
          m[nums[right]]++;
          sum+=nums[right];
        }
        
        
        
        
        

      }
      if(m.size() == k)
      {
        maxi = max(sum , maxi);

      }
      
      return maxi;
      
      
      
      
        
    }
};