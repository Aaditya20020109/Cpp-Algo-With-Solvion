class Solution {
public:
    unordered_map<char , int> countChar(string s)
    {
        unordered_map<char , int> m;
        for(char& ch:s)
        {
            m[ch]++;
        }

        return m;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        unordered_map<char , int> maxCount;

        for(string str:words2)
        {
            unordered_map<char , int> countCharMap = countChar(str);
            for(const auto& pair:countCharMap )
            {
                maxCount[pair.first] = max(maxCount[pair.first] , pair.second);
                
            }
        }


        vector<string > res;

        for(string str:words1)
        {
             unordered_map<char , int> countCharMap = countChar(str);
             bool isUniversal = true;
             for(const auto& pair:maxCount)
             {
                if(pair.second > countCharMap[pair.first])
                {
                    isUniversal = false;
                    break;

                }
             }

             if(isUniversal)
             {
                res.push_back(str);
             }

        }

        return res;


        
    }
};