class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int firstTwo =nums.at(1)*nums.at(0);
        int lastTwo = nums.at(n-1)*nums.at(n-2);
        return abs(firstTwo-lastTwo);
    }
};