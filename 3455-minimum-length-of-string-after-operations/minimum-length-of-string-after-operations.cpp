class Solution {
public:
    int minimumLength(string s) {

        unordered_map<char , int> charsCount;
        for(char& ch:s)
        {
            charsCount[ch]++;
        }

        int minLenString = 0;
        for(auto it=charsCount.begin() ; it!=charsCount.end() ; it++)
        {
            int remainingCharCnt = it->second%3 + it->second/3;

            while(remainingCharCnt>=3)
            {
                remainingCharCnt -=2;
            }
            minLenString +=remainingCharCnt;

        }

        return minLenString;

        
    }
};