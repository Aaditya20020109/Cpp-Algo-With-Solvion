class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        sort(nums.begin(),nums.end());
        map<int,int>::iterator it;
        for(auto i:nums)
        {
            if(m.find(i)!=m.end())
            {
                return true;

            }
            else
            {
                
                m.insert({i,1});
            }
        }
        return false;
    }
};