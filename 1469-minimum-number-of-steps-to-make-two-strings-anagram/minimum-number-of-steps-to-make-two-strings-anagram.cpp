
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq_1(26);
        for(int i=0;i<s.size();i++)
        {
            freq_1[s[i]-'a']++;
            freq_1[t[i]-'a']--;
        }
        int res = 0;
        for(int e:freq_1)
        {
            if(e>0)res+=e;
        }
        return res;
    }
};