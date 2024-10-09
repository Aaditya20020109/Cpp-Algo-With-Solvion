class Solution {
public:
    int minAddToMakeValid(string s) {
        int closing_count = 0;
        stack<char> st;
        for(char &ch:s)
        {
            if(ch=='(')
            {
                st.push(ch);
            }else{
                if(!st.empty())
                {
                    st.pop();
                }else{
                   closing_count++; 
                }
            }

        }

        return closing_count+st.size();
        
    }
};