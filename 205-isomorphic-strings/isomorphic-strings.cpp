class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;

        int n = s.size();


        for(int i=0;i<n;i++)
        {
            if(m1.find(s[i])!=m1.end())
            {
                if(m1[s[i]]!=t[i])return false;
            }
            if(m2.find(t[i])!=m2.end())
            {
                if(m2[t[i]]!=s[i])return false;
            }
            else{
                m1.insert({s[i],t[i]});
                m2.insert({t[i],s[i]});
            }
            
        }
        return true;
    }
};