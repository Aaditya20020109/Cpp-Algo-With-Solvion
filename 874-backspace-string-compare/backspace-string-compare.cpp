class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st;
        stack<char> st2;
        for(char &ch:s)
        {
            if(ch == '#' && !st.empty())
            {
                st.pop();
            }
            else if(ch!='#') st.push(ch);
        }
        for(char &ch:t)
        {
            if(ch == '#' && !st2.empty())
            {
                st2.pop();
            }
            else if(ch!='#') st2.push(ch);
        }
        return (st == st2);
        
    }
};