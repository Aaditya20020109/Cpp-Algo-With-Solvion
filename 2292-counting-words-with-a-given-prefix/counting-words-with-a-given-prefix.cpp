class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {

        int pref_len= pref.size();
        int cnt  = 0;

        for(string word:words)
        {
            string prefix = word.substr(0,pref_len);
            if(prefix == pref)cnt++;

        }


        return cnt;
        
    }
};