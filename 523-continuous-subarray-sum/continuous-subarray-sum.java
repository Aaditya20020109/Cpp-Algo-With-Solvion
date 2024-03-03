class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        Map<Integer,Integer> hm = new HashMap<>();
        int sum =0;
        int n = nums.length;
        hm.put(sum,-1);
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(hm.containsKey(sum%k) )
            {
                if( (i-hm.get(sum%k))>=2 )
                return true;
            }
           else hm.put(sum%k,i);
        }
        return false;
        
    }
}