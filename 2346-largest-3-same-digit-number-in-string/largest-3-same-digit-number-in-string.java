class Solution {

    public static int IntC(char ch) {
        return ch - '0';
    }

    public String Check(String s) {
        char c = s.charAt(0);
        int count = 1;
        for (int i = 1; i < 3; i++) {
            if (s.charAt(i) == c) count++;
        }
        return (count == 3) ? s : "";
    }

    public String largestGoodInteger(String num) {
        // int max = -1;
        // String res ="";
        // int n=num.length();
        // for(int i=0;i<n-2;i++)
        // {
        //     HashMap<Character,Integer> hm = new HashMap<>();
        //     char c1 = num.charAt(i);
        //     hm.put(c1,1);
        //     int j=0;
        //     for( j=i+1;j<i+3;j++)
        //     {
        //        char c = num.charAt(j);
        //         hm.put(c,hm.getOrDefault(c,0)+1);

        //     }
        //     if(hm.size()==1)
        //     {
        //         int N  = IntC(c1);
        //         if(max<N)
        //         {
        //             max = N;
        //             res = num.substring(i,j);

        //         }
        //     }
        // }
        // return res;

        int i = 0;
        int j = i + 3;
        int n = num.length();
        int max = -1;
        String res = "";
        while (j <n+1) {
            String s = Check(num.substring(i, j)); // if check() is false it return ""
            if (!s.isEmpty()) {
                int charInt = IntC(s.charAt(0));
                if (max < charInt) {
                    max = charInt;
                    res = s;
                }
            }

            i++;
            j++;
        }
        return res;
    }
}
