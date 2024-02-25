class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int e:nums)
        {
            m[e]++;

        }
        
        
        
        int count = n/2;
        unordered_map<int,int> :: iterator it;
        for(it=begin(m);it!=end(m);it++)
        {
            if(it->second>2)return false;
        }
        return true;
    }
};