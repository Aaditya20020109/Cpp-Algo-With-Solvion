class Solution {
public:
    int firstUniqChar(string s) {
        map<char ,int> m;
        for(char &ch:s)
        {
            if(m.find(ch)!=m.end())m[ch]++;
            else m.insert({ch,1});
        }
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)return i;
        }
        return -1;
        
    }
};