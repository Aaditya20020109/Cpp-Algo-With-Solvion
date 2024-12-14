class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];

        if(nums[0] < nums[n-1])return nums[0];

      int l = 0 , r = n-1;
      while(l<=r)
      {
        int mid = (l+r)/2;
     

        if(mid<n-1 && mid+1<=r && nums[mid]>nums[mid+1])
        {
            return nums[mid+1];
        }
        else if(nums[l] > nums[mid])
        {
            r = mid;
        }else{
            l = mid;
        }

      }
      return -1;
        
    }
};