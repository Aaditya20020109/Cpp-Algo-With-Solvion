class Solution
{
    public:
        int takeCharacters(string s, int k)
        {
            
            int n = s.length();
            int left = 0, right = 0, a = 0, b = 0, c = 0, res = 0;

            for (char &ch: s)
            {
                if (ch == 'a') a++;
                else if (ch == 'b') b++;
                else c++;
            }

            

            if (a < k || b < k || c < k) return -1;
           
            while ( right < n )
            {
               
                if (s[right] == 'a') a--;
                else if (s[right] == 'b') b--;
                else if(s[right] == 'c') c--;

                while (left<=right && (a < k || b<k || c<k))
                {
                    if (s[left] == 'a') a++;
                    else if (s[left] == 'b') b++;
                    else if(s[left] == 'c') c++;
                    left++;
                }
               
               
               res = max(res, (right - left + 1));
               right++;
               


            }
            

            return n-res; // minutes
        }
};