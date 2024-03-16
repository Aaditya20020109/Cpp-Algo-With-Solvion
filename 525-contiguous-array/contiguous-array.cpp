class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        // int prefix_sum = 0;
        unordered_map<int, int> m;
        int prefix_sum = 0;
        int sub_len = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i] == 0 ? -1 : 1;
            if (prefix_sum == 0) {
                sub_len = i + 1;
            } else if (m.find(prefix_sum) != m.end()) {
                sub_len = max(sub_len, i - m[prefix_sum]);

            } else {
                m.insert({prefix_sum, i});
            }
        }
        return sub_len;
    }
};