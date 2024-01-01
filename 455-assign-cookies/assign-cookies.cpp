class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int c = 0, start = 0;
        for (int i = 0; i < g.size(); i++) {
            int j = start;
            while (j < s.size()) {
                if (s[j] >= g[i]) {
                    c++;
                    start = j + 1;
                    break;
                }
                j++;
            }
            if (start == s.size() || j == s.size())
                break;
        }

        return c;
    }
};