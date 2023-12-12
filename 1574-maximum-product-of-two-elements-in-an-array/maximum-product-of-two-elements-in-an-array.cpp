class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int size  =nums.size();
       return (nums.at(size-1)-1)*(nums.at(size-2)-1);
        
    }
};