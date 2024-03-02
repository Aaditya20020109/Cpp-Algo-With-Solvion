class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for (int val : nums) {
            if(val<0)val*=-1;
            int x = 0;
            if (val % 2 != 0) {
                int hlf_val = val >> 1;
                x = pow(hlf_val, 2);
                x = x << 2;
                x += ((hlf_val) << 2) + 1;
                v.push_back(x);

            } else {
                int hlf_val = val >> 1;
                x = pow(hlf_val, 2);
                x = x << 2;
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};