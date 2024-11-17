class Solution {
public:
    int helper(long long target , vector<int> nums)
    {
        unordered_map<int , int> mp;
        int count = 0;
        for(int i:nums)
        {
            if(target%i==0)
            {
                count+=mp[target/i];

            }
            mp[i]++;

        }


        return count;

    }
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {


        int sum = 0;
        for(int i:nums1)
        {
            sum+=helper((long long)i*(long long)i , nums2);
        }

         for(int i:nums2)
        {
            sum+=helper((long long)i*(long long)i , nums1);
        }

        return sum;


        
    }
};