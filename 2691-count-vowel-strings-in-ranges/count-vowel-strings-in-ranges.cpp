class Solution {
public:
    set<int> vowels;
    bool FirstAndLastCharacterChecker(string s)
    {
        int n = s.size();
        if(vowels.count(s[0]) && vowels.count(s[n-1]))
        {
            return true;
        }

        return false;
        
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');
        int n = words.size();
        vector<int> v(n,0);

        if( FirstAndLastCharacterChecker(words[0]))
        {
            v[0] = 1;

        }

        for(int i = 1 ;  i<n ; i++)
        {
            if(FirstAndLastCharacterChecker(words[i]))
            {
                v[i] = v[i-1] + 1;
            }else{
                v[i] = v[i-1];
            }

        }

        vector<int> res;

        for(int i=0 ; i<queries.size() ;  i++)
        {

            vector<int> pair = queries[i];
            int firstIdx = pair[0] , secondIdx = pair[1];
            if(firstIdx == 0)
            {
                res.push_back(v[secondIdx]);

            }else if(firstIdx == secondIdx)
            {
                if(FirstAndLastCharacterChecker(words[firstIdx]))
                {
                     res.push_back(1);

                }else{
                     res.push_back(0);

                }
               
            }else{
                res.push_back(v[secondIdx] - v[firstIdx]);
                if(FirstAndLastCharacterChecker(words[firstIdx]))
                {
                     int m = res.size();
                     res[m-1] += 1;

                }
            }


        }

        return res;


         

        
    }
};