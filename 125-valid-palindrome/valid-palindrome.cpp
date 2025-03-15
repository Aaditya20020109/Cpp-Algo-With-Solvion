class Solution {
public:
    bool isPalindrome(string s) {

       string str = "";

       for(char &ch:s)
       {
        if((ch>='A' && ch<='Z') ||  (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {

            if(ch >= 'A' && ch<='Z')
            {
                int index = ch - 'A';
                char chr = index + 'a';
                str.push_back(chr);
            }else
            str.push_back(ch);

        }

       }


       string new_str = str;
       cout<<new_str<<endl;

       reverse(str.begin() , str.end());
       return (new_str == str);
        
    }
};