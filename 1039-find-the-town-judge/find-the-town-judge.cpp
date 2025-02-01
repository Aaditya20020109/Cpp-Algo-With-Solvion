class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        if(n==1 && trust.size()==0)return 1;

        unordered_map<int  , vector<int>> graph;
        unordered_map<int , int> MosttrustedPersons;
        for(auto& v:trust)
        {
            int ai = v[0] , bi = v[1];
            graph[ai].push_back(bi);
            MosttrustedPersons[bi]++;
        }


        for(auto it=MosttrustedPersons.begin() ; it!=MosttrustedPersons.end() ; it++)
        {
            if(it->second == n-1 && !graph.count(it->first))
            {

                return it->first;

            }
        }

        return -1;


        
    }
};