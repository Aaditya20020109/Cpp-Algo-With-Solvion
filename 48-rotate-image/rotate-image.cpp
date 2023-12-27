class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            int rowLen = matrix.size();
            int colLen = matrix[0].size();

            vector<int> v;

            for (int i = 0; i < colLen; i++)
            {
                for (int j = rowLen-1; j >=0; j--)
                {
                    v.push_back(matrix[j][i]);
                }
            }
            int k=0;
            for (int i = 0; i < rowLen; i++)
            {
                for (int j = 0; j < colLen; j++)
                {
                    matrix[i][j] = v[k++];
                }
            }
        }
};