class Solution {

    
    // public String makeString(String[] words) {
        //     int pivot = 0;
        //     int j = 1;
        //     while(j<words.length)
        //     {
        //         words[pivot]+=words[j];
        //         j++;
        //     }
        //     return words[pivot];

        // }
        public boolean arrayStringsAreEqual(String[] word1, String[] word2) {

        // return makeString(word1).equals(makeString(word2));



     //two pointer approach
        int w1 = 0;
        int w2 = 0;

        int s1 = 0;
        int s2 = 0;
        while (w1 != word1.length && w2 != word2.length) {
            if (word1[w1].charAt(s1++) != word2[w2].charAt(s2++)) return false;
             if (s1==word1[w1].length()) {
                w1++;
                s1 = 0;
            }  if((s2==word2[w2].length())) {
                w2++;
                s2 = 0;
            }
        }
        return (w1 == word1.length && w2 == word2.length) ;
    }
}
