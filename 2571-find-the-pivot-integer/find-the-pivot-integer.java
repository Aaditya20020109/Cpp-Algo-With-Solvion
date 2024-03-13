class Solution {
    public int pivotInteger(int n) {
       
        int left_sum =0;
        int right_sum =0;
        for(int i=1;i<=n;i++)
        right_sum+=i;
        for(int i=1;i<=n;i++)
        {
            left_sum+=i;
            if(right_sum==left_sum)return i;
            right_sum-=i;

        }
        return -1;

        
    }
}