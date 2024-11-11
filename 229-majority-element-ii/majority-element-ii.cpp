class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int maj1 = -1  , maj2 = -1;
        int cnt1 = 0 , cnt2 = 0;
        vector<int> res;

        for(int n:nums)
        {
            if(n == maj1)
            {
                cnt1++;

            }else if(n == maj2)
            {
                cnt2++;

            }else if(cnt1 == 0)
            {
                maj1=n;
                cnt1++;

            }else if(cnt2 == 0)
            {
                maj2 = n;
                cnt2++;

            }else {
                cnt1--;
                cnt2--;


            }
        }

        cnt1 = 0;
        cnt2 = 0;

        for(int n:nums)
        {
            
            if(n==maj1)cnt1++;
            else if(n==maj2)cnt2++;

        }


        if(cnt1>floor(nums.size()/3))
        {
            res.push_back(maj1);
        }

        if(cnt2>floor(nums.size()/3))
        {
            res.push_back(maj2);
        }


        return res;
        
    }
};