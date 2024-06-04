class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m ;
        for(char &ch: s)
        {
            m[ch]++;
        }

        int res = 0;

        bool oddFreqChar = false;
        for(auto& entry : m)
        {
            int freq = entry.second;
            if(freq%2  == 0)
            {

                res+=freq;

            }
            else{
                oddFreqChar = true;
                res+=(freq -1);


            }
        }

        return (oddFreqChar)?res+1:res;
        
    }
};