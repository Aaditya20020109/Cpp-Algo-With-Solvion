class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int val:nums)
        {
            m[val]++;
        }
        unordered_map<int,int> :: iterator it;
       int max_freq =0;
        for(it=m.begin();it!=m.end();it++)
        {
         max_freq = max(max_freq,it->second);

        }

int res =0;
        for(it=m.begin();it!=m.end();it++)
        {
         if(it->second==max_freq)
         {
             res+=max_freq;
         }

        }
        
return res;
        
    }
};