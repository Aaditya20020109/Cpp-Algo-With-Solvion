class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int ans = 0;

        int row_len = grid.size();
        int col_len = grid[0].size();

        for(int i=0;i<row_len ; i++)
        {

            for(int j=0;j<col_len;j++)
            {

                if(grid[i][j] == 1)
                {
                    int perimeter = 4;

                if(i>0  && grid[i-1][j] == 1)//top
                {
                    perimeter-=1;
                }

                 if(j>0  && grid[i][j-1] == 1)//left
                {
                    perimeter-=1;
                }

                 if(j<col_len-1  && grid[i][j+1] == 1)//right
                {
                    perimeter-=1;
                }


                 if(i<row_len-1  && grid[i+1][j] == 1)//down
                {
                    perimeter-=1;
                }


                ans+=perimeter;

                }
            }
        }
        

        return ans;
    }
};