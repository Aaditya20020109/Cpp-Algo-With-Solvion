class Solution {
public:
    vector<int> minOperations(string boxes) {

     int numberOfBoxes = boxes.size();

vector<int> leftBoxCount(numberOfBoxes, 0);
vector<int> rightBoxCount(numberOfBoxes, 0);

// Calculate left box counts
for (int i = 1; i < numberOfBoxes; i++) {
    leftBoxCount[i] += leftBoxCount[i - 1];
    if (boxes[i - 1] == '1') {
        leftBoxCount[i]++;
    }
}

// Calculate right box counts
for (int i = numberOfBoxes - 2; i >= 0; i--) {
    rightBoxCount[i] += rightBoxCount[i + 1];
    if (boxes[i + 1] == '1') {
        rightBoxCount[i]++;
    }
}

vector<int> totalLeftDistance(numberOfBoxes, 0);
vector<int> totalRightDistance(numberOfBoxes, 0);
vector<int> result(numberOfBoxes, 0);

// Calculate total left distances
for (int i = 1; i < numberOfBoxes; i++) {
    totalLeftDistance[i] = totalLeftDistance[i - 1] + leftBoxCount[i];
}

// Calculate total right distances
for (int i = numberOfBoxes - 2; i >= 0; i--) {
    totalRightDistance[i] = totalRightDistance[i + 1] + rightBoxCount[i];
}

// Combine left and right distances for the final result
for (int i = 0; i < numberOfBoxes; i++) {
    result[i] = totalLeftDistance[i] + totalRightDistance[i];
}

return result;

    }
};