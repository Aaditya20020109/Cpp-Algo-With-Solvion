class Solution {
public:
    bool isValid(vector<int> derived , vector<int> nums)
    {
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
        {
              int firstIdx = i , secondIdx =(i+1)%n;

              if(nums[firstIdx]^nums[secondIdx] != derived[firstIdx])return false;
           
           

        }

        return true;
    }
    bool doesValidArrayExist(vector<int>& derived) {

        int n = derived.size();
        vector<int> nums(n,0);

        for(int i=0 ; i<n ; i++)
        {
            int firstIdx = i , secondIdx =(i+1)%n;
           
            nums[secondIdx] = derived[firstIdx]^nums[firstIdx];


           
        }

        return isValid(derived , nums);
        
    }
};