class Solution {
public:
    bool isCycleDFS(unordered_map<int , vector<int>>& m , vector<bool>& visited , vector<bool>& inRecursion , int u)
    {

        inRecursion[u] = true;
        visited[u] = true;

        for(int v:m[u])
        {
            if(inRecursion[v] && visited[v])
            {
                return true;
            }

            if(visited[v] == false &&  isCycleDFS(m , visited , inRecursion , v))
            return true;
        }
        //backtracking
        inRecursion[u] = false;
        return false;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int V = numCourses;

        vector<bool> visited(V , false);
        vector<bool> inRecursion(V , false);

        queue<int> q;

        unordered_map<int , vector<int>> m;
        for(auto& v:prerequisites)
        {
            int a = v[0];
            int b = v[1];
            m[b].push_back(a);
            
        }
    //  int Count = 0;
    //     for(int i=0 ; i<V;  i++)
    //     {
    //         if(indegree[i] == 0)
    //         {
    //         q.push(i);
    //         Count++;
    //         }

    //     }

       
    //     while(!q.empty())
    //     {
    //         int v = q.front();
    //         q.pop();
    //         for(int u:m[v])
    //         {
    //             indegree[u]--;
    //             if(indegree[u] == 0)
    //             {
    //                 q.push(u);
    //                 Count++;
    //             }
    //         }
    //     }

    //     return (Count == numCourses)?true:false;
        int count = 0;
        for(int i=0 ; i<V ; i++)
        {
            if(visited[i] == false &&  isCycleDFS(m , visited , inRecursion , i))
            return false;
        }
        for(bool r:visited)
        if(r==true)count++;
        return count == numCourses ? true : false;

        
    }
};