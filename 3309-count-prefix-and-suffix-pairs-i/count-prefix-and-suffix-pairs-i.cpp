class Solution
{
    public:
        int countPrefixSuffixPairs(vector<string> &words)
        {
            int n = words.size();
            int cnt = 0;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (words[i].size() <= words[j].size())
                    {
                        int len = words[i].size();

                        string str1 = words[j].substr(0, len);

                        int second_start = words[j].size() - len;

                        string str2 = words[j].substr(second_start, len);

                        if (str1 == words[i] && str2 == words[i])
                            cnt++;
                    }
                }
            }

            return cnt;
        }
};