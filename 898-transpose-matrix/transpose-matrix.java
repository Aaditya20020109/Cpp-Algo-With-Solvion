class Solution {
    public int[][] transpose(int[][] matrix) {
        int rowLen = matrix.length;
        int colLen = matrix[0].length;
        int col =0;
        int ans[][] = new int[colLen][rowLen];
        for(int i=0;i<colLen;i++)
        {
            for(int j=0;j<rowLen;j++)
            {
                ans[i][j] = matrix[j][i];
            }
        }
        return ans;
        
    }
}