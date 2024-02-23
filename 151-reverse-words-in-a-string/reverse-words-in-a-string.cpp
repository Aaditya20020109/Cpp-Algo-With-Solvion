class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int start =0;
        while(s[start]==' ')start++;
        int j =start;
        char ch = ' ';
        bool is = false;
        while(j<s.size())
        {   
             ch = s[j];
            if(ch==' ')
            {
                string str = s.substr(start,j-start);
                st.push(str);
                int i =j;

               while(i<s.size() && s[i]==' ')
               {
                   i++;
               }
               if(i==s.size())
               {
                   is = true;
                   break;
               }
               start = i;
               j = start;
                
            }
            else 
            {
                j++;
            }
            
        }
        if(!is){
        string last_str = s.substr(start,j-start);
        st.push(last_str);
        }
        s = "";
        while(!st.empty())
        {

            s+=st.top();
            if(st.size()>1)s+=" ";

            st.pop();
        }
        return s;
        
    }
};