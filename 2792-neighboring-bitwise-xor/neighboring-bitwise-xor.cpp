class Solution {
public:
    bool isValid(vector<int> derived , vector<int> nums)
    {
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
        {
              int currIdx = i , nextIdx =(i+1)%n;

              if(nums[currIdx]^nums[nextIdx] != derived[currIdx])return false;
           
           

        }

        return true;
    }
    bool doesValidArrayExist(vector<int>& derived) {

        int n = derived.size();
        vector<int> nums(n,0);

        for(int i=0 ; i<n ; i++)
        {
            int currIdx = i , nextIdx =(i+1)%n;
           
            nums[nextIdx] = derived[currIdx]^nums[currIdx];


           
        }

        return isValid(derived , nums);
        
    }
};