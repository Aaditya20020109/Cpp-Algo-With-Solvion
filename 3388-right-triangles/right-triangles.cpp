class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {

        int rowLen = grid.size();
        int colLen = grid[0].size();

        long long ans = 0;

        vector<int> col(colLen , 0);
        vector<int> row(rowLen , 0);

        for(int i =0 ;i<rowLen ; i++)
        {
            for(int j=0;j<colLen ; j++)
            {
               if(grid[i][j] == 1)
               {
                 col[j]+=1;
                 row[i]+=1;
               }
            }
        }

         for(int i =0 ;i<rowLen ; i++)
        {
            for(int j=0;j<colLen ; j++)
            {
               if(grid[i][j] == 1)
               {
                int rowOnesCount = row[i];
                int colOnesCount = col[j];

              
                    rowOnesCount-=1;
                    colOnesCount-=1;
                    ans += colOnesCount *  rowOnesCount;
                
                 
               }
            }
        }


        return ans;
        
    }
};