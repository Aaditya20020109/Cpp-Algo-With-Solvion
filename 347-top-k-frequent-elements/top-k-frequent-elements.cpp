class Solution
{
    public:
      static bool sortvect(const vector<int> &v1, const vector<int> &v2)
        {
            return v1[1] < v2[1];
        }
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> m;
        for (int e: nums)
        {
            if (m.find(e) != m.end())
            {
                m[e]++;
            }
            else
            {
                m.insert({ e,
                    1 });
            }
        }

        vector<vector < int>> v;
        map<int, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            v.push_back({ it->first,
                it->second });
        }
        sort(v.begin(), v.end(), sortvect);
        int i = v.size() - 1;
        vector<int> res;
        while (k != 0)
        {
            res.push_back(v[i][0]);
            k--;
            i--;
        }
        return res;
    }
};