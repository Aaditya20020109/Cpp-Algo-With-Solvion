class Solution {
    public String mergeAlternately(String word1, String word2) {
        boolean switch_1 = true;
        boolean switch_2 = false;
        int i =0;//word1
        int j =0;//word2
        String res ="";
        while(i!=word1.length() || j!=word2.length())
        {
            if(i!=word1.length() && switch_1)
            {
                res+=word1.charAt(i++);
                if(j!=word2.length()){
                   switch_1=false;
                   switch_2 = true;
                   
                   }

            }
            if(j!=word2.length() && switch_2)
            {
                res+=word2.charAt(j++);
                if(i!=word1.length()){
                   switch_1 = true;
                   switch_2 = false;
                   
               }
            }

        }
        return res;


    }
}