class Solution {

    public int maxArea(int height[]) {
        Arrays.sort(height);
        int max = 0;
        for (int j = 0; j < height.length; j++) {
            int base = height.length - j ;
            int area = (height[j] * base);
            System.out.print(area);
            max = Math.max(area, max);
        }
        return max;
    }

    public int largestSubmatrix(int[][] matrix) {
        int n = matrix.length;
        int i = 1;
        while (i < n) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] == 1 && matrix[i - 1][j] >= 1) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }

            i++;
        }

        int max = 0;
        for (int k = 0; k < n; k++) {
            max = Math.max(max, maxArea(matrix[k]));
        }
        return max;
    }
}
