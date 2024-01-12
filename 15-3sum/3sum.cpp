#include <vector>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        for (i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            else {
                int j = i + 1;
                int k = n - 1;
                while (j < k) {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0) {
                        vector<int> v = {nums[i], nums[j], nums[k]};
                        if (res.size() > 0) {
                            int m = res.size();
                            if (res[m - 1] != v) {
                                res.push_back(v);
                            }
                        } else {
                            res.push_back(v);
                        }

                        k--;
                        j++;
                    }
                    if (sum > 0)
                        k--;
                    if (sum < 0)
                        j++;
                }
            }
        }
        return res;
    }
};