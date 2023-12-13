class Solution {
    public boolean checkForRow(int row,int col,int mat[][])
    {
            for(int i=0;i<mat[0].length;)
            {
                if(i!=col && mat[row][i]==1)return false;

                i++;
            }
            return true;

    }
    public boolean checkForCol(int row,int col,int mat[][])
    {
         for(int i=0;i<mat.length;)
            {
                if(i!=row && mat[i][col]==1)return false;

                i++;
            }
            return true;
        
    }
    public int numSpecial(int[][] mat) {

        int rowLen = mat.length;
        int colLen = mat[0].length;
        int specialPosCount  =0;
        for(int i=0;i<rowLen;i++)
        {
            for(int j=0;j<colLen;j++)
            {
                if(mat[i][j]==1 && checkForRow(i,j,mat) && checkForCol(i,j,mat))
                specialPosCount++;
            }
        }
        return specialPosCount;
        
    }
}