class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<vector<int>> storage;


        int n = nums.size();

        vector<int> set_bits;
        for(int n:nums)
        {
            set_bits.push_back(__builtin_popcount(n));
        }


        for(int i=0 ;  i<n ; )
        {
            int j = i+1;
            vector<int> v;
            v.push_back(nums[i]);
            while(j<n && set_bits[i]==set_bits[j])
            {
                v.push_back(nums[j]);
                j++;
            }

            sort(begin(v) , end(v));

            storage.push_back(v);

            i = j;



        }


        sort(begin(nums) , end(nums));
        vector<int> res;
        for(int i=0 ; i<storage.size() ; i++)
        {
            for(int j = 0 ; j<storage[i].size() ; j++)
            {
                res.push_back(storage[i][j]);
            }
        }


        return (res==nums);
        
    }
};