class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        int res[] = new int[n];
        
        int left[] = new int[n];
        int right[] = new int[n];
        left[0] = 0;
        right[n-1] = 0;
        for(int i=1;i<n;i++)
        {
            left[i] = left[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i] = right[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            int curr = nums[i];
            int currIndex = i;
            int leftSize = currIndex-0;
            int rightSize = n-currIndex-1;
            int leftCalc = Math.abs((leftSize*curr)-left[i]);
            int rightCalc = Math.abs((rightSize*curr)-right[i]);
            res[i] = leftCalc+rightCalc;
            
        }
        return res;
    }
}