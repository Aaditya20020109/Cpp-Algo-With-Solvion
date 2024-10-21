class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int left = 0 , right = 0 , sum = 0 ,n = nums.size() , min_len = 1000000;
      while(right<n)
      {
        sum+=nums[right];
        while(sum>=target)
        {
          min_len = min(min_len , right-left+1);
          sum-=nums[left++];
        }
        right++;
          

      }
      
      return (min_len == 1000000)?0:min_len;
        
    }
};