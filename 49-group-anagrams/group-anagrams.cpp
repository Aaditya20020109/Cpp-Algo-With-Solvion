class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res ;
        map<string,vector<string>> m;
        for(auto s:strs)
        {
            string key = s;
            sort(key.begin(),key.end())
            ;
            if(m.find(key)!=m.end())
            {
                m[key].push_back(s);
            }
            else 
            {
                m.insert({key,{s}});

            }
        }
        map<string,vector<string>>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            res.push_back(it->second);
        }
    return res;
    }
};