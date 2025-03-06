class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        unordered_map<int,int> m;
        for(int i=1 ; i<=grid.size()*grid.size() ; i++)
        m[i]=0;


        for(int i=0 ; i<grid.size() ; i++)
        {
            for(int j=0 ; j<grid[0].size() ; j++)
            {
                int n = grid[i][j];
                m[n]++;
            }
        }
        

        vector<int> res(2,0);
        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(m[it->first] == 0)
            {
                res[1] = it->first;

            }else if(m[it->first] == 2)
            {
                res[0] = it->first;

            }
        }

        return res;

    }
};