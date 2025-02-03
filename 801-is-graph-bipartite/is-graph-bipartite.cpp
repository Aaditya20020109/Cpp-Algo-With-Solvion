class Solution {
public:

    bool checkBipartiteBFS(vector<vector<int>>& adj, int curr, vector<int>& color, int currColor) {
        color[curr] = currColor; //color kardiya curr node ko
        
        queue<int> que;
        que.push(curr);
        
        while(!que.empty()) {
            int u = que.front();
            que.pop();
            
            for(int &v : adj[u]) {
                if(color[v] == color[u]) {
                    return false;
                } else if(color[v] == -1) {
                    color[v] = 1 - color[u];
                    que.push(v);
                }
            }
        }
        
        return true;
    }

	bool isBipartite(vector<vector<int>>& adj){
        int V = adj.size();
	    
	    vector<int> color(V, -1); //no node colored in the start
	    
	    //red = 1
	    //gree = 0
	    
	    for(int i = 0; i<V; i++) {
	        if(color[i] == -1) {
	            if(checkBipartiteBFS(adj, i, color, 1) == false)
	                return false;
	        }
	    }
	    
	    return true;
	    
	}
};