class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {


        unordered_map<int,int> m;
        for(int e:nums)
        {
            m[e]++;
        }
        int res = 0;

        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            int n = it->second;
            int m = n-1;
        
            int pairsCount = n*m;
            cout<<pairsCount<<endl;
            res+=(int)pairsCount/2;
            
        }

        return res;

        
    }
};