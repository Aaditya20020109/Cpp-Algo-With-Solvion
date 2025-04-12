class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int count = 0;
        for (int e : nums) {
            if (e == val)
                count++;
        }

        for (int i = 0; i < n - count; i++) {
            while (nums[i] == val) {
                int j = i;
                while (j < n - 1) {
                    nums[j] = nums[j + 1];
                    j++;
                }
            }
        }

        return n - count;
    }
};