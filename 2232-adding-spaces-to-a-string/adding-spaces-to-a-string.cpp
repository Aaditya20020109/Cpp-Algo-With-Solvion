class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans = "";

        int n = s.size();

        int j = 0; //traverse in the spaces

        for(int i =0 ; i<n ; i++)
        {
            if(j<spaces.size() && i == spaces[j])
            {
                ans+=" ";
                j++;
            }
            ans+=s[i];
        }

        return ans;
    }
};