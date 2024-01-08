class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
       map<char,int> m;
       for(char &ch:s)
       {
           if(m.find(ch)!=m.end())
           {
               m[ch] = m[ch]+1;
           }
           else 
           {
               m.insert({ch,1});

           }
       }

       for(char &ch:t)
       {
            if(m.find(ch)!=m.end())
           {
               m[ch] = m[ch]-1;
               if(m[ch]==0)m.erase(ch);
           }
           else 
           {
               return false;
           }
       }
       return true;
        
    }
};