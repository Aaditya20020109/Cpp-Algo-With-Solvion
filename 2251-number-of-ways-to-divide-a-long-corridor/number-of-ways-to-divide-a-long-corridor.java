class Solution {
   int M = 1000000007;
    public int numberOfWays(String corridor) {
        ArrayList<Integer> A=  new ArrayList<>();//store the place of "S"
        int n = corridor.length();

        for(int i=0;i<n;i++)
        {
            char ch = corridor.charAt(i);
            if(ch=='S')A.add(i);
        }

        long count =1;
        if(A.size()%2!=0 || A.size()==0)return 0;
       
        int endOfPrev =A.get(1);
        for(int i=2;i<A.size();i+=2)
        {
           
            count = (count * (A.get(i)-endOfPrev)) % M;
             endOfPrev = A.get(i+1);
        }
        return (int)count;


        /* -----------LEARNING-----------
                difference between two segments is the count of number of ways to represent the segment and each segment had 2 seats


        */
    }
}