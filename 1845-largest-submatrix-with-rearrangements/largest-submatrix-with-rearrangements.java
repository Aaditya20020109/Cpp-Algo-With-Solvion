class Solution {

    public int maxArea(int a[]) {
        Arrays.sort(a);
        int i = a.length - 1;

        for (int e : a) System.out.print(e);
        System.out.println();
        int max = 0;
        while (i >= 0) {
            if (i != a.length - 1) {
                int currPos = i;
                int diff = a.length - currPos;
                int base = diff * a[i];
                a[i] = base; //base
            }
            max = Math.max(a[i], max);
            i--;
        }
        return max;
    }

    public int largestSubmatrix(int[][] matrix) {
        int rowLen = matrix.length;
        int colLen = matrix[0].length;
        int heightMatrix[][] = new int[rowLen][colLen];
        int Max = 0;
        //write the first row into heightMatrix because it has no height.
        for (int i = 0; i < colLen; i++) {
            heightMatrix[0][i] = matrix[0][i];
        }

        //start from the second row and add the previous  ones height with current ones.
        for (int i = 1; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (matrix[i][j] != 0) {
                    heightMatrix[i][j] = matrix[i][j] + heightMatrix[i - 1][j]; //current + (previous Row element height)
                } else heightMatrix[i][j] = 0;
            }
        }

        for (int i = 0; i < rowLen; i++) {
            int mat[] = heightMatrix[i];
            Max = Math.max(maxArea(mat), Max);
        }
        return Max;
    }
}
