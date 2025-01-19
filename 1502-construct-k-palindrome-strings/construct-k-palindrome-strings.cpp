class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k)return false;
        unordered_map<char , int> m;
        for(char& ch:s)
        {
            m[ch]++;
        }
       

        int oddCount  = 0 ;
        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(it->second%2!=0)
            {
                oddCount+=1;
            }
        }
        

      return (oddCount<=k);
    }
};