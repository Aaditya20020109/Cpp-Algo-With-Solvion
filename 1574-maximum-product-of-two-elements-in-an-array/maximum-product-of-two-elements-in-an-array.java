class Solution {
    public int maxProduct(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            nums[i] = nums[i]-1;

        }
int n=nums.length;
int max=0;

     
        Arrays.sort(nums);
        return nums[n-1]*nums[n-2];
    }
}