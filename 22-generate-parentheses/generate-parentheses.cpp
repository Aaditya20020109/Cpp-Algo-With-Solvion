class Solution {
public:
    vector<string> ans;
    void checkForValidParenthesis(stack<char> st)
    {
        stack<char> dup_st = st;
        string str = "";

        while(!dup_st.empty())
        {
            str.push_back(dup_st.top());
            dup_st.pop();
        }
        reverse(begin(str),end(str));

        bool rejected = false;
        for(char &ch: str)
        {
            if(dup_st.empty())
            {
                if(ch == ')')
                {
                    rejected = !rejected;
                    break;
                }
                else{
                    dup_st.push(ch);
                }
            }
            else{
                if(ch == '(')
                {
                    dup_st.push(ch);

                }
                else if(ch == ')'){
                    if(dup_st.top() == '(')dup_st.pop();
                    else{
                    rejected = !rejected;
                    break;

                    }
                }
            }
        }

        if(rejected == false)
        {
            ans.push_back(str);
        }

    }
    void recursion(stack<char> st , int openBrac , int closeBrac)
    {
        if(openBrac == 0 && closeBrac == 0)
        {
            checkForValidParenthesis(st);
            return;
            

        }

        if(openBrac > 0)
        {
            st.push('(');
            recursion(st , openBrac-1 , closeBrac);
            st.pop();
        }

        if(closeBrac > 0)
        {
             st.push(')');
            recursion(st , openBrac , closeBrac-1);
            st.pop();
        }



    }
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        recursion( st , n , n);
        return ans;
        
    }
};