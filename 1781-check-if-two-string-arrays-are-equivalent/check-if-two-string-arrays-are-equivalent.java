class Solution {
    public String concatString(String s[])
    {

        String res = "";
        for(String  str:s)res+=str;
        return res;
    }
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        
        return concatString(word1).equals(concatString(word2));
        
        
    }
}