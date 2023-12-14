class Solution {

    static class Pair {
        int onesCount;
        int zerosCount;

         Pair(int onesCount, int zerosCount) {
            this.onesCount = onesCount;
            this.zerosCount = zerosCount;
        }
    }

    public int[][] onesMinusZeros(int[][] grid) {
        int rowLen = grid.length;
        int colLen = grid[0].length;
        int diff[][] = new int[rowLen][colLen];


        Pair row[] = new Pair[rowLen];
        Pair col[] = new Pair[colLen];


        for(int i=0;i<rowLen;i++)
        {
            int ones =0;
            int zeroes = 0;
            for(int j=0;j<colLen;j++)
            {
                if(grid[i][j]==1)ones++;
                else zeroes++;

            }
         Pair p = new Pair(ones,zeroes);
          row[i] = p;
        }


        // for col


         for(int i=0;i<colLen;i++)
        {
            int ones =0;
            int zeroes = 0;
            for(int j=0;j<rowLen;j++)
            {
                if(grid[j][i]==1)ones++;
                else zeroes++;

            }
          Pair p = new Pair(ones,zeroes);
          col[i] = p;
        }


        // diff

        for(int i=0;i<rowLen;i++)
        {
            for(int j =0;j<colLen;j++)
            {
              diff[i][j] = row[i].onesCount + col[j].onesCount - row[i].zerosCount - col[j].zerosCount;
            }
        }
        return diff;

    }
}
