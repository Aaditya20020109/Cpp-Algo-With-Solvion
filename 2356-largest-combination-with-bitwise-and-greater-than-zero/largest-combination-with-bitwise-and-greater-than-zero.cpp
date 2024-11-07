class Solution {
public:
    int largestCombination(vector<int>& candidates) {

        int n = candidates.size();

        int j = 0;

        int max_len = 0;

        while(j<32)
        {
            int cnt = 0;
            for(int i=0 ; i<n ;)
            {
                int ele = candidates[i];

                int bit_value = ele&(1<<j);

                if(bit_value != 0)
                {
                    cnt++;
                }
                i++;
                
            }

            max_len = max(cnt , max_len);

            j++;
        }

        return max_len;
        
    }
};