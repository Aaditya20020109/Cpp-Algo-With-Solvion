class Solution
{
    public:
        string destCity(vector<vector < string>> &paths)
        {
            set<string> s;
            int rowLen = paths.size();
            //inserting in the set.
            for (int i = 0; i < rowLen; i++)
            {
                s.insert(paths[i][0]);
            }
            //checking city in set
            for (int i = 0; i < rowLen; i++)
            {
               if(s.find(paths[i][1]) == s.end())return paths[i][1];

            }
            return "";

        }
};