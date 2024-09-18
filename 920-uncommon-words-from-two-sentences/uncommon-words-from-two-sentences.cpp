class Solution {
public:

    vector<string> getStringArr(string s1)
    {
        int i=0 , j=0;
        vector<string> v;
        for(j=0 ; j<=s1.size() ; j++)
        {
            if(j == s1.size())
            {
                 v.push_back(s1.substr(i , j-i));
                 break;

            }
            else if(s1[j] == ' ')
            {
                v.push_back(s1.substr(i , j-i));
                i = j+1;


            }
        }

        return v;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string , int> map_1;

        vector<string > v_str = getStringArr(s1);
        for(string str:v_str)
        {
            map_1[str]+=1;
        }
        v_str = getStringArr(s2);
        unordered_map<string , int> map_2;
        for(string str:v_str)
        {
            map_2[str]+=1;
        }


        unordered_map<string , int>::iterator it;

        vector<string> ans;
        for(it = map_1.begin() ; it!=map_1.end() ; it++)
        {
            if(map_2.find(it->first)==map_2.end() && it->second == 1)
            {
                ans.push_back(it->first);

            }
        }


for(it = map_2.begin() ; it!=map_2.end() ; it++)
        {
            if(map_1.find(it->first)==map_1.end() && it->second == 1)
            {
                ans.push_back(it->first);

            }
        }
        return ans;


        
    }
};