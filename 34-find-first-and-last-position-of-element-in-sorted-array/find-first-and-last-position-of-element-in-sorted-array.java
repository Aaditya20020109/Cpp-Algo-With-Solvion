class Solution {
  public static int find_Index(int nums[],int target,boolean go_left)
  {
    int l=0,r=nums.length-1;
    int res =-1;
    while(l<=r)
    {
      int mid = (l+r)/2;
      if(nums[mid]==target)
      {
        res = mid;
        if(go_left)
        {
          r=mid-1;
        }
        else{l=mid+1;}
      }
      else if(nums[mid]<=target)l=mid+1;
      else r=mid-1;
    }
    return res;
  }
    public int[] searchRange(int[] nums, int target) {
    int left_most = find_Index(nums,target,true);
    int right_most = find_Index(nums,target,false);
      int res[]=new int[2];
      res[0]=left_most;
      res[1]=right_most;
      return res;
    
    
        
    }
}