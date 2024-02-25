class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int start = nums.size()-k;
        reverse(begin(nums),begin(nums)+start);
        reverse(begin(nums)+start,end(nums));
        reverse(begin(nums),end(nums));
        
    }
};