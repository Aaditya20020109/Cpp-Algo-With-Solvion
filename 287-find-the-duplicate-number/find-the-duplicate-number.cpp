class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int n:nums)
        {
            m[n]++;
        }

        unordered_map<int,int> ::iterator it = m.begin();
        while(it!=m.end())
        {
            if(it->second>=2)return it->first;
            it++;
        }
        return -1;
        
    }
};