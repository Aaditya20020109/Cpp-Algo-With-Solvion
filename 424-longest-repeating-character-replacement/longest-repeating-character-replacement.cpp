class Solution {
public:
    int characterReplacement(string s, int k) {
            int ans = 0;
        for (char c = 'A'; c <= 'Z'; c++) {
            int i = 0, j = 0, replaced = 0;


            while (j < s.size()) {
                // equal to c
                if (c == s[j]) // 
                {
                    j += 1;

                } else if (replaced < k) { //replaced!=k
                    j += 1;
                    replaced += 1;

                } else if (s[i] == c) { // minimize the array s[i] == c
                    i += 1;
                } else { // s[i] aur s[j] bhi c equal nahi hai aur replaced bhi k se bada ho gaya hai. substring ko minimize karna hai.
                    i++;
                    replaced -= 1;
                }
                ans = max(ans , j-i);

            }
        }


        return ans;
    }
};