class Solution {
public:
    bool canConstruct(string s, int k) {

        if(s.size()<k)return false;

        unordered_map<char , int> m;
        for(char& ch:s)
        {
            m[ch]++;
        }

        int odd_cnt = 0 , even_cnt = 0;

        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(it->second%2 == 0)even_cnt++;
            else odd_cnt++;
        }

       return odd_cnt<=k;


        


        
    }
};