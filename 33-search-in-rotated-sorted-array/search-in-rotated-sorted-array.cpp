class Solution {
public:
    vector<int> findPivot(vector<int>& nums , int target) {
    int n = nums.size();
  

    int l = 0 , r = n-1;
    int pivot = -1;
    while(l<=r)
    {
    int mid = (l+r)/2;
    if(mid<n-1 && mid+1<=r && nums[mid] > nums[mid+1])
    {
        pivot =  (mid+1);
        break;
    }
    else if(nums[l] > nums[mid])
    {
        r = mid;
    }else{
        l = mid;
    }

    }
    if(nums[0]<=target && target<=nums[pivot-1])
    {
    return {0 , (pivot-1)};
    }

    return {pivot , n-1};
    
    
}
int search(vector<int>& nums, int target) {

    int n = nums.size();
    
    if(nums.size() == 1 )
    {
        return (nums[0] == target)?0:-1;

    }
    vector<int> ArrForSearch;
     if(nums[0] < nums[n-1])
     {
        ArrForSearch = {0 , n-1};

     }
     else{
        ArrForSearch  = findPivot(nums , target);

     }

    
   

    int low = ArrForSearch[0];
    int high = ArrForSearch[1];
  
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
            high = mid-1;
            

        }else{
            low = mid+1;
            

        }
    }

    return -1;





    
}
};