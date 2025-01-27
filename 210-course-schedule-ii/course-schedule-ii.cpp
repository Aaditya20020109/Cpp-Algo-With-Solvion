class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        int V = numCourses;

        vector<int> indegree(V , 0);

        queue<int> q;

        unordered_map<int , vector<int>> m;
        for(auto& v:prerequisites)
        {
            int a = v[0];
            int b = v[1];
            m[b].push_back(a);
            indegree[a]++;
        }
        int Count = 0;
        vector<int> orderRes;
        for(int i=0 ; i<V;  i++)
        {
            if(indegree[i] == 0)
            {
            q.push(i);
            orderRes.push_back(i);
            }

        }

       
        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            for(int u:m[v])
            {
                indegree[u]--;
                if(indegree[u] == 0)
                {
                    q.push(u);
                    orderRes.push_back(u);
                }
            }
        }
        vector<int> Emptyres;
        return orderRes.size() == V ? orderRes : Emptyres;

        
    }
};