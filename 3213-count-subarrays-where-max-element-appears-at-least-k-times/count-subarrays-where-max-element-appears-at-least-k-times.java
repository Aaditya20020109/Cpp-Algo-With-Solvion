class Solution {
    public long countSubarrays(int[] nums, int k) {
        int maxEle = 0;
        for(int e:nums)maxEle =  Math.max(maxEle,e);
        int n =nums.length;
        int i=0;
        int count=0;
        long ans =0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==maxEle)count++;
            if(count>=k)
            {
                while(count>=k)
                {
                    ans+=Long.valueOf(n-j);
                   if(nums[i]==maxEle)count--;
                   i++ ;
                }
            }
        }
        return ans;
        
    }
}