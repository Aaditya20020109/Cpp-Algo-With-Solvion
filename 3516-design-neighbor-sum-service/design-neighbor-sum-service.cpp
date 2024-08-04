class neighborSum {
public:
    vector<vector<int>> grid1 ;
    neighborSum(vector<vector<int>>& grid) {
        grid1 = grid;
        
    }
    
    int adjacentSum(int value) {

        int sum = 0 ; 
        for(int i=0 ; i<grid1.size() ; i++)
        {
            bool isFind = false;
            for(int j =0 ; j<grid1[0].size() ; j++)
            {
               if(grid1[i][j] == value)
               {
                 if(i-1 >= 0)
                {
                    sum+=grid1[i-1][j];

                }
                if(i+1 < grid1.size())
                {
                    sum +=grid1[i+1][j];
                }

                if(j-1 >= 0)
                {
                    sum+=grid1[i][j-1];

                }
                if(j+1 < grid1[0].size())
                {
                    sum +=grid1[i][j+1];
                }
                isFind = true;
                break;
               }
                if(isFind)break;


            }
        }

        return sum;
        
    }
    
    int diagonalSum(int value) {
        int sum = 0 ; 
        for(int i=0 ; i<grid1.size() ; i++)
        {
            bool isFind = false;
            for(int j =0 ; j<grid1[0].size() ; j++)
            {
               if(grid1[i][j] == value)
               {
                 if(i-1 >= 0 && j+1 < grid1[0].size() )
                {
                    sum+=grid1[i-1][j+1];

                }
                if(i+1 < grid1.size() && j-1 >= 0)
                {
                    sum +=grid1[i+1][j-1];
                }

                if(j-1 >= 0 && i-1 >=0 )
                {
                    sum+=grid1[i-1][j-1];

                }
                if(j+1 < grid1[0].size()  && i+1 < grid1.size())
                {
                    sum +=grid1[i+1][j+1];
                }
                isFind = true;
                break;
               }
                if(isFind)break;


            }
        }

        return sum ;
        
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */