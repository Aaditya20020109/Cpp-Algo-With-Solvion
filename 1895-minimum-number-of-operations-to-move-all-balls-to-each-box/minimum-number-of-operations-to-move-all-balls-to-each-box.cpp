class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = boxes.size();

        vector<int> leftCount(n, 0);
        vector<int> rightCount(n, 0);

        for (int i = 1; i < n; i++) {
            leftCount[i] += leftCount[i - 1];
            if (boxes[i - 1] == '1')
                leftCount[i]++;
        }

        for (int i = n - 2; i >= 0; i--) {
            rightCount[i] += rightCount[i + 1];
            if (boxes[i + 1] == '1')
                rightCount[i] += 1;
        }

      

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        vector<int> res(n, 0);

        // left
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] + leftCount[i];
        }

        // right
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] + rightCount[i];
        }

        for (int i = 0; i < n; i++) {
            res[i] = left[i] + right[i];
        }

        return res;
    }
};