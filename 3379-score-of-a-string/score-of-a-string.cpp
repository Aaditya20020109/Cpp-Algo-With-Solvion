class Solution {
public:
    int scoreOfString(string s) {
        vector<int> v;
        v.push_back((int)s[0]);
        int ans = 0;
        for(int i=1 ;i<s.size() ; i++)
        {
            int curr = (int)s[i];
            int prev = v[v.size()-1];
            ans+=(abs(curr-prev));
            v.push_back(curr);
        }

        return ans;
        
    }
};