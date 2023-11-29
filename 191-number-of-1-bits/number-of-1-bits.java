public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        // String s =Integer.toBinaryString(n);
        // int count =0;
        // int i =0;
        // while(i<s.length())
        // {
        //    char ch = s.charAt(i++);
        //    int chInt  = ch-'0';
        //    if((chInt^1)==0)count++;
        // }
        // return count;
        //              -----------------OR------------------
        int count =Integer.bitCount(n);
        return count;
        
    }
}