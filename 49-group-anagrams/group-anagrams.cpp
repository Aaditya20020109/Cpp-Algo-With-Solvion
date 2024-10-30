class Solution {
public:

string generate(string s)
{
    int ch[26] = {0};
    for(char &ch_1:s)
    {
        ch[ch_1-'a']++;
    }

    string res = "";
    for(int i=0 ; i<26 ; i++)
    {
        if(ch[i]>0)
        {
            res+=string(ch[i] , i+'a');

        }
    }

    return res;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        unordered_map<string , vector<string>> mp;
        
        for(string s:strs)
        {
            string res_1 = generate(s);
            mp[res_1].push_back(s);
        }


        for(auto it=mp.begin(); it!=mp.end() ; it++)
        {
            res.push_back(it->second);
        }


        return res;
    }
};