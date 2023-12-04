class Solution {
    public int missingNumber(int[] nums) {
        int count[] = new int[nums.length+1]
        ;
        for(int x:nums)
        {
            count[x]++;
        }
        for(int i=0;i<count.length;i++)
        {
            if(count[i]==0)return i;
        }

        return 0;
    }
}