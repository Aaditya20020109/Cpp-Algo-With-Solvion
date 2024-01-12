class Solution {
public:
    bool isPalindrome(string s) {
        string s_1="";
        for(char &ch:s)
        {
            if(ch==' '){continue;}
            int ascii = (int)ch;
            if((ascii>=97 && ascii<=122) || (ascii>=48 && ascii<=57))
            {
                s_1+=ch;
            }
            else if(ascii>=65 && ascii<=90)
            {
                int small_ch_asciiVal = ascii+32;
                char c = (char)small_ch_asciiVal;
                s_1+=c;

            }
        
        }
        cout<<s_1<<endl;
        string str =s_1;
        reverse(s_1.begin(),s_1.end());
        cout<<s_1<<endl;
        return str==s_1;
    }
};