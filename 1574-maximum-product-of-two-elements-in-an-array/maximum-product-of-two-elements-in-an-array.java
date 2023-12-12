class Solution {
    public int maxProduct(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            nums[i] = nums[i]-1;

        }
int n=nums.length;
int max=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                max = Math.max(max,(nums[i]*nums[j]));
            }
        }
        return max;
    }
}