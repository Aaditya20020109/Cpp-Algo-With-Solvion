class Solution {
    public String[] findRelativeRanks(int[] score) {
        int n = score.length;
        int matrix[][] = new int[n][2];
        for(int i=0;i<n;i++)
        {
            matrix[i][0] = i;
            matrix[i][1] = score[i];
        }
        Arrays.sort(matrix,Comparator.comparingDouble(o->o[1]));
        String places[] = new String[n];
        int count = 1;
        for(int i=n-1;i>=0;i--)
        {
            if(count==1)
            {
                places[matrix[i][0]] = "Gold Medal";
                count++;
            }
            else if(count==2)
            {
                places[matrix[i][0]] = "Silver Medal";
                count++;
            }
            else if(count==3)
            {
                places[matrix[i][0]] = "Bronze Medal";
                count++;
            }
            else{
                String c=Integer.toString(count);
                places[matrix[i][0]] = c;
                count++;

            }

        }
        return places;

        
    }
}