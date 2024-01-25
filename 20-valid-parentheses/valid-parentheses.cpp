class Solution
{
    public:
        bool isValid(string s)
        {
            stack<int> st;
            int n = s.size();
           
            int i = 0;
            while (i < n)
            {
                char ch = s[i];
                if (st.empty())
                {
                    if (ch == '(' || ch == '[' || ch == '{')
                    {
                        st.push(ch);
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (ch == '(' || ch == '[' || ch == '{')
                {
                    st.push(ch);
                }
                else
                {
                    if (!st.empty() && ch == ')' && st.top() == '(') st.pop();
                    else if (!st.empty() && ch == '}' && st.top() == '{') st.pop();
                    else if (!st.empty() && ch == ']' && st.top() == '[') st.pop();
                    else return false;
                }
                i++;
            }

            return st.empty();
        }
};