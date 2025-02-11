class Solution {
public:
    string removeOccurrences(string s, string part) {
        int i=0  , j = part.size();
        bool isPresent = true;
        while(j<=s.size() && s.size()>=part.size() )
        {

            string substr_s = s.substr(i , j-i);
            if(substr_s == part)
            {
                // remove this substring
                string first_part = s.substr(0 , i);
                string second_part = s.substr(j , s.size()-j+1);

                s = first_part + second_part;
                i=0;
                j = part.size();


            }else {
                i++;
                j++;
            }

           

        }


        return s; 

        
    }
};