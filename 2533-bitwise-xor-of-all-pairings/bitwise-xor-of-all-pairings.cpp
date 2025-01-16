class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {

        int nums2Xor = 0;
        for(int i:nums2)nums2Xor^=i;

        int res = 0;

        for(int i:nums1)
        {
            int n = 0;
            if(nums2.size() % 2 == 1)
            {
                n  = nums2Xor^i;
            }else{
                n = nums2Xor;
            }

            res^=n;
        }

        return res;



        
    }
};