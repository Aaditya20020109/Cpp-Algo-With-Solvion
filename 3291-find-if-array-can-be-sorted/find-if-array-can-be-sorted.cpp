class Solution {
public:
    int count_bits(int n) {
        int c = 0;
        while (n != 0) {
            c++;
            n = n & (n - 1);
        }
        return c;
    }
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> set_bits;
        for (int e : nums) {
            set_bits.push_back(count_bits(e));
        }

        int prev_max = -1e5;
        for (int i = 0; i < n;) {

            int maxi = INT_MIN;
            int mini = INT_MAX;
            int j = i;
            for (j = i; j < n; j++) {
                if (set_bits[i] == set_bits[j]) {
                    maxi = max(maxi, nums[j]);
                    mini = min(mini, nums[j]);
                } else
                    break;
            }
            i = j;
            if (mini < prev_max)
                return false;
            prev_max = maxi;
        }
        return true;
    }
};