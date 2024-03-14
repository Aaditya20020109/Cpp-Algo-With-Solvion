class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int val:nums)
        {
            m[val]++;
        }
        unordered_map<int,int>:: iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second > 1)return true;
        }
        return false;
        
    }
};