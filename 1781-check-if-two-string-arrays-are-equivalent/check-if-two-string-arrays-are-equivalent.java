class Solution {
    public String makeString(String[] words)
    {
        int pivot = 0;
        int j = 1;
        while(j<words.length)
        {
            words[pivot]+=words[j];
            j++;
        }
        return words[pivot];

    }
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
    
    return makeString(word1).equals(makeString(word2));
        
        
    }
}