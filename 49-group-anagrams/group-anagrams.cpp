class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string,vector<string>> m;
        for (string s : strs) {
            string str = s;
            sort(s.begin(), s.end());
            if (m.find(s) != m.end()) {
                m[s].push_back(str);

            } else {
                vector<string> v = {str};
                m.insert({s, {str}});
            }
        }

        vector<vector<string>> ans;
        map<string, vector<string>>::iterator it;
        for (it = m.begin(); it != m.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};