class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> m;
        int target = (int)nums.size()/2;
        for(int e:nums)
        {
            m[e]++;
        }

        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(it->second > target)
            {
                return it->first;
            }
        }
    return -1;
      
    }
};