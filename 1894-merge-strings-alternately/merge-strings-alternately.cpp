class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = max(word1.size() , word2.size());
        string s = "";

        int i = 0;

        while(i<n)
        {
            if(i<word1.size())
            {
                s+=word1[i];


            }

            if(i<word2.size())
            {
                 s+=word2[i];

            }


            i++;
        }
        return s;

        
        
    }
};