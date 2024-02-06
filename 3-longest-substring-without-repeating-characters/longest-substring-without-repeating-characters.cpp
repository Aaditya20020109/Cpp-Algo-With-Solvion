class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int n=s.size();
        int maxi =0;
        map<char,int> m;
        for(j=0;j<n;j++)
        {
            char ch = s[j];
            if(m.find(ch)!=m.end())
            {
                m[ch]++;
            }
            else {
                m.insert({ch,1});
            }

            while(m[ch]>1)
            {
                char ch = s[i];
                m[ch]--;
                if(m[ch]==0)m.erase(ch);
                i++;
            }
            maxi = max(maxi,(j-i+1));
        }
        return maxi;
        
    }
};