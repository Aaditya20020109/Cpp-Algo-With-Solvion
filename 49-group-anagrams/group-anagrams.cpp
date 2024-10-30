class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res ;
        unordered_map<string , vector<string>> mp;
        for(string s:strs)
        {
            string value = s;
            sort(s.begin() , s.end());
            if(mp.find(s)!=mp.end())
            {
                mp[s].push_back(value);
                

            }else{
                mp.insert({s , {value}});

            }
        }


        for(auto  it=mp.begin() ; it!=mp.end() ; it++)
        {
            res.push_back(it->second);
        }


        return res;
    }
};