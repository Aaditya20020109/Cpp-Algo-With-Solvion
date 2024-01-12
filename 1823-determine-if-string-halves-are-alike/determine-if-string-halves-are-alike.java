class Solution {
    public boolean check(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U')
        {
            return true;
        }
        return false;
    }
    public boolean halvesAreAlike(String s) {
        int n = s.length()/2;
        int i=0;
        int c1=0,c2=0;
        while(i<n)
        {
            char ch = s.charAt(i);
            if(check(ch))
            {
                c1++;
            }
            i++;
        }
        while(i<s.length())
        {
            char ch = s.charAt(i);
            if(check(ch))
            {
                c2++;
            }
            i++;
        }
        return (c1==c2);
        
    }
}