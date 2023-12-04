class Solution {
    public static int IntC(char ch)
    {
        return ch-'0';
    }
    public String largestGoodInteger(String num) {
        int max = -1;
        String res ="";
        int n=num.length();
        for(int i=0;i<n-2;i++)
        {
            HashMap<Character,Integer> hm = new HashMap<>();
            char c1 = num.charAt(i);
            hm.put(c1,1);
            int j=0;
            for( j=i+1;j<i+3;j++)
            {
               char c = num.charAt(j);
                hm.put(c,hm.getOrDefault(c,0)+1);

            }
            if(hm.size()==1)
            {
                int N  = IntC(c1);
                if(max<N)
                {
                    max = N;
                    res = num.substring(i,j);

                }
            }
        }
        return res;
        
    }
}