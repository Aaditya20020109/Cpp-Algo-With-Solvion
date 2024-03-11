class Solution {
public:
    string customSortString(string order, string s) {
        // unordered_set<char> s1;
        unordered_set<char> s2;
        unordered_map<char,int> m;

        for(char &ch:s){
            m[ch]++;
      }

        string ans =  "";
        for(char &ch:order)
        {
            if(m.find(ch)!=m.end())
            {
                while(m[ch]!=0)
                {
                    ans+=ch;
                    m[ch]--;
                }
                s2.insert(ch);
            }
        }

        for(char &ch:s)
        {
            if(s2.find(ch)==s2.end())
            {
                ans+=ch;
            }
        }
        return ans;
        
    }
};