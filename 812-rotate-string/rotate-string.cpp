class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)return true;
       string raw_str = s;
       while(s!=goal)
       {
        string sub_str = s.substr(1 , s.size()-1);
        s = sub_str + s[0];
        if(s == raw_str)
        {
            return false;
        }
       }

       return true;
        
    }
};