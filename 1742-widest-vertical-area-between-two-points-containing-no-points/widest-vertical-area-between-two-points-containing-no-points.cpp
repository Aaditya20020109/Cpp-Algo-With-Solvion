#include <cmath>
#include <algorithm>
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v;
        int rowLen = points.size();
        for(int i=0;i<rowLen;i++)
        {
            v.push_back(points[i][0]);
        }
        sort(v.begin(),v.end());
        int i=1;
        int maxi =0;

        while(i<rowLen)
        {
             maxi = max(v[i]-v[i-1],maxi);
             i++;

        }
        return maxi;
        
    }
};