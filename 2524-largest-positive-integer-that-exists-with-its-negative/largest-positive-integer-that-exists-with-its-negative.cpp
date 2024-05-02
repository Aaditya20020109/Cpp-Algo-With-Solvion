class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int n:nums)
        {
            if(n < 0)
            m.insert({n,-1});

        }
        int ans = -1;

        for(int n:nums)
        {
            if(n > 0)
            {
                
                if(m.find(n*-1) != m.end())
                {
                    ans = max(n , ans);

                }
            }

        }


        return ans;

        
    }
};