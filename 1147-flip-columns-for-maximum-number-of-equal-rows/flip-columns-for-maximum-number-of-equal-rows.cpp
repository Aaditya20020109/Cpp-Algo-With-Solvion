class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {

        int maxRows = 0;
     for(auto &row:matrix)
     {
        vector<int>  inverted(matrix[0].size());
        for(int i = 0 ; i<row.size() ; i++)
        {
            inverted[i] = (row[i] == 0)?1:0;
        }
        int count = 0;
        for(vector<int> v : matrix)
        {
            if(row==v || inverted == v)
            {
                count++;
            }

        }

        maxRows = max(count , maxRows);
     } 


     return maxRows;
    }
};