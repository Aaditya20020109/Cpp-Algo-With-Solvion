class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> Ans;
    map<string,vector<string>> m;
    for(string str:strs)
    {
        string value = str;
        sort(begin(str),end(str));
        if(m.find(str)!=m.end())
        {
            m[str].push_back(value);

        }
        else 
        {
            m.insert({str,{value}});
        }
    }

    map<string,vector<string>>:: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        Ans.push_back(it->second);
    }
    return Ans;
        
    }
};