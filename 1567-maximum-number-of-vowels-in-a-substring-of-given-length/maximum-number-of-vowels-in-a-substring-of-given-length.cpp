class Solution
{
    public:
        int maxVowels(string s, int k)
        {

            int vowel_count = 0;
            int i = 0;
            int max_vowel_count = 0;
            for (int t = 0; t < k; t++)
            {
                switch (s[t])
                {
                    case 'a':
                       vowel_count++;
                        break;
                    case 'e':
                       	vowel_count++;                       

                        break;
                    case 'i':
                        vowel_count++;
                        break;
                    case 'o':
                        vowel_count++;
                        break;
                          
                    case 'u':
                        vowel_count++;
                        break;
                          
                       	
                }
              
              
            }
          
          max_vowel_count = max(vowel_count , max_vowel_count);
          for(int j=k ; j<s.size() ; j++)
          {
             switch (s[j])
                {
                    case 'a':
                       vowel_count++;
                        break;
                    case 'e':
                       	vowel_count++;                       

                        break;
                    case 'i':
                        vowel_count++;
                        break;
                    case 'o':
                        vowel_count++;
                        break;
                          
                    case 'u':
                        vowel_count++;
                        break;
                          
                       	
                }
             switch (s[i++])
                {
                    case 'a':
                       vowel_count--;
                        break;
                    case 'e':
                       	vowel_count--;                       

                        break;
                    case 'i':
                        vowel_count--;
                        break;
                    case 'o':
                        vowel_count--;
                        break;
                          
                    case 'u':
                        vowel_count--;
                        break;
                          
                       	
                }
             max_vowel_count = max(vowel_count , max_vowel_count);
            
            
          }
          
          return max_vowel_count;
        }
};