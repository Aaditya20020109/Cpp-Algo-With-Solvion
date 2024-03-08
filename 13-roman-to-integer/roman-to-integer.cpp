class Solution {
public:
    int romanToInt(string s) {
        map<int,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int i=0;
        int res =0;
        for(i=0;i<s.size();i++)
        {
            if(i+1!=s.size() && m[s[i+1]]>m[s[i]] )
            {
                res-=m[s[i]];
            }
            else
            {
                res+=m[s[i]];
            }
        }
        return res;
        
    }
};