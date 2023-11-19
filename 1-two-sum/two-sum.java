class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> hm = new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            
                int e = target-nums[i];
                if(hm.containsKey(e))
                {
                       int ans[] = new int[2];
                    ans[0] = hm.get(e);
                    ans[1] = i;
                    return ans;
                }
                else hm.put(nums[i],i);
            }
        
    int ans[] = new int [2];
        return ans;
    }
}