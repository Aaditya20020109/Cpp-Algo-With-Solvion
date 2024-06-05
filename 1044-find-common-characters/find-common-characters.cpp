class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        unordered_map<char,int> final_map , temp;

        for(char &ch: words[0])
        temp[ch]++;


        for(int i=1 ; i<words.size() ; i++)
        {

            for(char &ch : words[i])
            {
                if(temp.find(ch) != temp.end())
                {
                    temp[ch]--;
                    if(temp[ch] == 0) temp.erase(ch);
                    final_map[ch]++;
                }
            }
             temp = final_map;
             final_map.clear();

        }


        vector<string> ans;

        for(auto it = temp.begin() ; it!=temp.end() ; it++)
        {
            
            for(int i=0 ; i<(it->second) ;i++)
            {
                string s = "";
                s.push_back(it->first);
                ans.push_back(s);
            }

        }

        return ans;
        
    }
};