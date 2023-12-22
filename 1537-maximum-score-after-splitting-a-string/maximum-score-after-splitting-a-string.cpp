#include <cmath>
#include <algorithm>

class Solution
{
    public:
        int maxScore(string s)
        {
            int zeroes = 0;
            int ones = 0;
            for (char c: s)
            {
                if (c == '0')
                    zeroes++;
                else
                    ones++;
            }

         
            int ones_Count = 0;
            int zeros_Count = 0;
            int maxi = 0;
            int temp_ones = ones;
            for (int i = 0; i < s.size()-1; i++)
            {

                if (s[i] == '0')
                {
                    zeros_Count++;
                }
                else
                {
                    ones_Count++;
                }
                ones -= ones_Count;
                int sum = zeros_Count + (ones);
                maxi = max(sum, maxi);
                ones = temp_ones;
            }
            return maxi;
        }
};