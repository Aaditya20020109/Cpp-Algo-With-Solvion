public class Solution {

    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        //   -----------------DONT USE THIS METHOD -----------
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
        //  -----------------OR------------------
        // int count =Integer.bitCount(n);
        // return count;
        // --------------OPTIMISED METHOD---------------


        // =>APPROACH-I
        // int bit = 0;
        // int mask = 1;

        // for (int i = 0; i < 32; i++) {
        //     if ((n & mask) != 0) bit++;
        //     mask = mask << 1;
        // }
        // return bit;


        // APPROACH-II
        int bitCount =0;
        while(n!=0)
        {
            bitCount++;
            n = n&(n-1);
        }
        return bitCount;


    }
}
