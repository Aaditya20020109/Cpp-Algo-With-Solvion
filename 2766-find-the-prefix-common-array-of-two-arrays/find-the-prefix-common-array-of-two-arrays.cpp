class Solution {
public:
    int CountPrefix(unordered_map<int , int> m)
    {
        int cnt = 0;
        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(it->second >= 2)
            {
                cnt++;
            }
        }

        return cnt;
    }
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        if(A.size() == 1)
        {
            return {1};
        }
        vector<int> res(A.size() , 0);
        unordered_map<int , int> m;
        for(int i=0 ; i<A.size() ; i++)
        {

            m[A[i]]++;
            m[B[i]]++;
            
                res[i] = CountPrefix(m);

            
            

        }

        return res;
        
    }
};