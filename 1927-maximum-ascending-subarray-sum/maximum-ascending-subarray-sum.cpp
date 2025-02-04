class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        int i=0  ; 
        int maxSum = 0;
        int sum = 0;
       for(i=0 ; i<nums.size()-1 ; i++)
       {
        sum = nums[i];
        for(int j=i+1;j<nums.size() ; j++)
        {
            if(nums[j-1]<nums[j])sum+=nums[j];
            else break;
        }
        maxSum = max(sum , maxSum);
       }

       return maxSum;
        
    }
};