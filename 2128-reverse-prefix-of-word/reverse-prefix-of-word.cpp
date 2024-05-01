class Solution {
public:
    void reverseStr(string& s , int second)
    {
        int i = 0;
        int j = second;
        while(i<j)
        {
            // swap 
             char temp = s[i];
             s[i] = s[j];
             s[j]  = temp; 
            i++;
            j--;
        }



    }
    string reversePrefix(string word, char ch) {
        int i =0 ;
        int j = 0;
        for(i=0 ; i<word.size() ; i++)
        {
            if(word[i] == ch)
            {
                reverseStr(word,i);
                break;
            }

        }
        return word;
        
    }
};