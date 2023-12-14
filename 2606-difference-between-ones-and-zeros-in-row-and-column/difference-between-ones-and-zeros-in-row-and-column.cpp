class Solution
{
    public:
        vector<vector < int>> onesMinusZeros(vector<vector < int>> &grid)
        {
/*
         diff[i][j] = onesRow[i] + onesCol[j] - (N - onesRow[i]) - (M - onesCol[j])
                    = 2 *onesRow[i] + 2 *onesCol[j] - N - M
             */
            int rowLen = grid.size();
            int colLen = grid[0].size();

            vector<int> onesRow(rowLen,0);
            vector<int> onesCol(colLen,0);

            for(int i=0;i<rowLen ;i++)
            {
                for(int j=0;j<colLen;j++)
                {
                    onesRow[i]+=grid[i][j];
                    onesCol[j]+=grid[i][j];
                }
            }
            vector<vector<int>> diff(rowLen,vector<int>(colLen,0));

            for(int i=0;i<rowLen;i++)
            {
                for(int j=0;j<colLen;j++)
                {
                    diff[i][j] = 2*onesRow[i] + 2*onesCol[j]-colLen-rowLen;
                }
            }
            

            return diff;


        }
};