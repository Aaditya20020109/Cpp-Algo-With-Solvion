class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int res = 0;
        int mazority = 0;

        for(int n:nums)
        {
            if(mazority == 0)
            {
                res = n;

            }

            if(res == n)
            {
                mazority+=1;
            }else {
                mazority-=1;
            }
        }

        return res;
      
    }
};