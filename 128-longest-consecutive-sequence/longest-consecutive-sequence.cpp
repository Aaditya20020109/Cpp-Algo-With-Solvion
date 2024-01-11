#include <algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        map<int,int> m;
        for(int e:nums)
        {
            if(m.find(e)!=m.end())
            {
                m[e]++;
            }
            else
            {
                m.insert({e,1});

            }
        }
        map<int,int>:: iterator it;
        vector<int> v;
        int max_1 =1;

        for(it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->first);
        }
        int size_1 =1;
        int i=1;
        while(i<v.size())
        {
           
            if(v[i-1]!=v[i]-1)
            {
                max_1 = max(size_1,max_1);
                size_1 =1;
            }
            else size_1++;
            i++;
        }
        max_1 = max(size_1,max_1);
        return max_1;

    }
};