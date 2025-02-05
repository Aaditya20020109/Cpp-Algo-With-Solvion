class Solution {
public:
    bool helper(string s1 , string s2)
    {
        int cnt = 0;
        for(int i=0 ; i<s1.size() ; i++)
        {
            char ch1 = s1[i];
            char ch2 = s2[i];
            if(ch1!=ch2)
            {
                cnt++;
            }
        }

        if(cnt%2!=0)return false;
        cnt = cnt/2;

        if( cnt > 1)return false;
        return true;
        
    }
    bool areAlmostEqual(string s1, string s2) {

        if(s1.size()!=s2.size())return false;

        map<char , int> m1;
        for(char& ch:s1)
        {
            if(m1.find(ch)!=m1.end())
            {
                m1[ch]++;

            }else{
                m1.insert({ch , 1});
            }
        }
        map<char , int> m2;
        for(char& ch:s2)
        {
            if(m2.find(ch)!=m2.end())
            {
                m2[ch]++;

            }else{
                m2.insert({ch , 1});
            }
        }


        if(m1!=m2)return false;

        return  helper(s1 , s2) || helper(s2 , s1);

        
        
    }
};