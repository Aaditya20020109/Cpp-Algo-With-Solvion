class Solution {
public:
    int rowLen ;
    int colLen ;
    void DFS(vector<vector<char>>& grid , int row , int col)
    {

        if(row < 0 || row >=rowLen || col< 0 || col>=colLen || grid[row][col] == '0' )
        {
            return;
        }


        if(grid[row][col] == '$')return;//visited

        grid[row][col] = '$';
        
        DFS(grid , row-1 , col);//top
        DFS(grid , row+1 , col);//down
        DFS(grid , row , col+1);//right
        DFS(grid , row , col-1);//left
    }
    int numIslands(vector<vector<char>>& grid) {
        rowLen = grid.size();
        colLen = grid[0].size();

         int islandCount = 0;


        for(int i=0 ; i<rowLen ; i++)
        {

            for(int j=0 ; j<colLen ; j++)
            {
                if(grid[i][j] == '1')
                {
                    DFS(grid,i,j);
                    islandCount+=1;

                }
            }

        }

        return islandCount;
        
    }
};