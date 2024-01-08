class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        map<int,int> m;

        for(int i =0;i<nums.size();i++)
        {
            int n = target-nums[i];
            if(m.find(n)!=m.end() && !m.empty())
            {
                res[0] = m[n];
                res[1] = i;
                break;
            }
            else
            {
                m.insert({nums[i],i});

            }
        }
        return res;
        
    }
};