class Solution {
public:
    string minWindow(string s, string t) {
        
        int n = s.size();

        int i = 0 , j  = 0;

        int countRequired = t.size() , start_i = 0;

        unordered_map<char , int>  m;

        int minSubstringLen = INT_MAX;

        for(char& ch:t)
        {
            m[ch]++;

        }


        while(j<n)
        {
            char ch = s[j];
            if(m[ch] > 0)
            {
             
                countRequired-=1;
            }

               m[ch]-=1;

            while(countRequired == 0)
            {
                int currentlength = j-i+1;
                if(currentlength < minSubstringLen)
                {
                    minSubstringLen = currentlength;
                    start_i = i;
                }

                char ch_1 = s[i];
                m[ch_1]++;
                if(m[ch_1] > 0)
                {
                    countRequired+=1;
                }
                i++;
            }


            j++;
        }

        return (minSubstringLen == INT_MAX)?"":s.substr(start_i , minSubstringLen);
    }
};