class Solution {
    public boolean check(int a[])
    {
        Arrays.sort(a);
        int i=0;
        int j=1;
        int n = a[j++]-a[i++];
        while(j<a.length)
        {

            if(a[j++]-a[i++]!=n)return false;
           
        }
        return true;

    }
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean> res = new ArrayList<>();
        for(int i=0;i<l.length;i++)
        {
           int a[] = new int[r[i]-l[i]+1];
           int idx=0;
            for(int j=l[i];j<=r[i];j++)
            {
                a[idx++] = nums[j];

            }
            res.add((check(a))?true:false);
        }
        return res;
    }
}