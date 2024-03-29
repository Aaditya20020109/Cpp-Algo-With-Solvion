class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long max_ele = *max_element(begin(nums),end(nums));
        int l=0,r=0;

        long long cnt = 0;
        int n = nums.size();
        while(r<n)
        {
            k-=(nums[r]==max_ele);
            while(k==0)
            {
                cnt+=(n-r);
                k+=(nums[l]==max_ele);
                l++;
            }
            r++;
        }
        return cnt;
    }
};