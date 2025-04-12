class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int n:nums)
        {
            m.insert({n,1});
        }
        int i=0;
        for(auto k = m.begin() ; k!=m.end() ; k++)
        {
            nums[i++]= k->first;
        }
        return m.size();
        
    }
};