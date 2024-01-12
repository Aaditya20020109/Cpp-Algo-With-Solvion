class Solution {
public:
    bool check(char& ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U')
        {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
      int n = s.size()/2;
        int i=0;
        int c1=0,c2=0;
        while(i<n)
        {
            char ch =s[i];
            if(check(ch))
            {
                c1++;
            }
            i++;
        }
        while(i<s.size())
        {
             char ch =s[i];
            if(check(ch))
            {
                c2++;
            }
            i++;
        }
        return (c1==c2);
    }
};