class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();

        vector<long long> left(n);
        vector<long long> right(n);

       

        left[0] = nums[0];
        right[n-1] = nums[n-1];

        for(int i=1 ; i<n ; i++)
        {
            left[i] = (left[i-1] + nums[i]);

        }

        for(int i=n-2 ; i>=0 ; i--)
        {
            right[i] =( right[i+1] + nums[i]);
        }


        int cnt = 0;


        for(int i=0  ; i<(n-1) ; i++)
        {

            long long  first_sum = left[i];
            long long second_sum = right[i+1];

            if(first_sum >= second_sum)
            {
                cnt++;

            }

        }

        return cnt;

        
    }
};