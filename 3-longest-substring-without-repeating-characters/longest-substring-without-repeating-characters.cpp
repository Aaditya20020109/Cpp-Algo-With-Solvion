class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char , int> m;
      int max_len = 0 , i=0;
      for(int j=0 ; j<s.size() ; j++)
      {
        m[s[j]]++;
        while(m[s[j]] > 1)
        {
          m[s[i]]--;
          if(m[s[i]] == 0)
          {
            m.erase(s[i]);

          }
          i++;
          
        }
        max_len = max(max_len , j-i+1);
        

      }
      return max_len;
        
    }
};