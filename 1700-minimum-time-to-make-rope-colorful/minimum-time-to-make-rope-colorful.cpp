#include <cmath>
#include <algorithm>
// two Pointer + greedy.
class Solution
{
    public:
        int minCost(string colors, vector<int> &neededTime)
        {
            int n = neededTime.size();
            int l=0,r=1;
            int res = 0;
           for(r =1;r<n;r++)
            {
                if(colors[l]==colors[r])
                {
                    if(neededTime[l]>=neededTime[r])
                    {
                        res+=neededTime[r];

                    }
                    else 
                    {
                        res+=neededTime[l];
                        l=r;

                    }
                }
                else l=r;
            }
            return res;

        }
};