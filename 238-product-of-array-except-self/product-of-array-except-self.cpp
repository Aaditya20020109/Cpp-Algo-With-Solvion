class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> res(n);
        int i=1;
        left[0] = right[n-1] =1;
        while(i<n)
        {
            left[i] = left[i-1]*nums[i-1];
            i++;
        }
        i=n-2;
        while(i>=0)
        {
            right[i] = right[i+1]*nums[i+1];
            i--;
        }
        i=0;
        while(i<n)
        {
            res[i] = left[i]*right[i];
            i++;
        }
        return res;

    }
};