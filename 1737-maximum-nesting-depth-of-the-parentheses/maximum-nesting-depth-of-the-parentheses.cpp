class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int max_depth = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                int _size = st.size();
                max_depth  = max(max_depth,_size);

            }
            else if(s[i]==')'){
                st.pop();

            }
        }
        return max_depth;
        
       
    }
};