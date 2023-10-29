class Solution {
    public int hammingDistance(int x, int y) {
        int c =0;
        for(int i=0;i<32;i++)
        {
            int bx = ((x>>i)&1);
            int by  = ((y>>i)&1);
            if(bx!=by)c++;
        }
        return c;
        
    }
}