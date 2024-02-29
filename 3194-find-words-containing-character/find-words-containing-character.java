class Solution {
    public Boolean check(String s,char x)
    {
        for(char ch: s.toCharArray())
        {
            if(ch==x)return true;

        }
        return false;
    }
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> Ans = new ArrayList<>();
        int i=0;
        int j = words.length-1;
        while(i<j)
        {
            String s1 = words[i];
            String s2 = words[j];
            if(check(s1,x))Ans.add(i);
            if(check(s2,x))Ans.add(j);
            i++;
            j--;
        }
        if(i==j)
        {
            if(check(words[i],x))Ans.add(i);
        }
        return Ans;

        
    }
}