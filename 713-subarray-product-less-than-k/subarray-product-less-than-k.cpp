class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0 || k==1 )return 0;
        int i=0;
        int n= nums.size();
        int product = 1;
        int count =0;
        for(int j=0;j<n;j++)
        {
            product*=nums[j];
            while(product>=k)
            {
                product/=nums[i];
                i++;
            }
           if(product<k) count+=(j-i+1);

        }
        return count;
    }
};