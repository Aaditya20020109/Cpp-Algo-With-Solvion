class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r_len = matrix.size();
        int c_len = matrix[0].size();
        vector<vector<int>> v;
        for(int i=0;i<r_len;i++)
        {
            for(int j=0;j<c_len;j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
            }
        }


        for(vector<int> idx:v)
        {
            int row = idx[0];
            int col = idx[1];
            for(int i=0;i<r_len;i++)
            {
                matrix[i][col] =0;
            }


            for(int i=0;i<c_len;i++)
            {
                matrix[row][i] =0;
            }
        }
        
    }
};