class Solution {
public:
    int minChanges(string s) {
        int cnt = 0;
        int i =0;
        while(i<s.size())
        {
            if(s[i]!=s[i+1])cnt++;
            i+=2;
        }


        return cnt;
        
    }
};