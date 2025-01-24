class Solution {
public:
    void DFS(unordered_map<int ,vector<int>> &graph , vector<bool>& visited , int u)
    {
        visited[u] = true;
        
        for(int &v: graph[u])
        {
            if(!visited[v])
            {
                DFS(graph , visited , v);
            }

        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V = isConnected.size();
        unordered_map<int , vector<int>> m;
        for(int i=0 ; i<V ; i++)
        {
            for(int j=0 ; j<isConnected[0].size() ; j++)
            {
                
                if(isConnected[i][j] == 1)
                {
                    m[i].push_back(j); 
                    m[j].push_back(i);

                }

            }

        }
        int count = 0;
        vector<bool> visited(V , false);
        
        
        for(int i=0 ; i<V ; i++)
        {
            if(!visited[i])
            {
                DFS(m , visited , i);
                count++;
            }

        }
        
        return count;
    }
};