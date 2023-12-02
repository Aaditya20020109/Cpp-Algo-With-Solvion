class Solution {
    public boolean checkForGoodString(String s,int freq[])
    {
        int sFreq[]=new int[26];
        for(char ch:s.toCharArray())
        {
            sFreq[ch-'a']++;
        }


        for(char c:s.toCharArray())
        {
            if(sFreq[c-'a']>freq[c-'a'])return false;
            
        }
        return true;
    }
    public int countCharacters(String[] words, String chars) {

        int freq[]=new int[26];
        for(char ch:chars.toCharArray())
        {
            freq[ch-'a']++;
        }
        int res =0;
        for(int i=0;i<words.length;i++)
        {
            String s = words[i];
            if(checkForGoodString(s,freq))res+=s.length();

        }
        return res;
        
    }
}