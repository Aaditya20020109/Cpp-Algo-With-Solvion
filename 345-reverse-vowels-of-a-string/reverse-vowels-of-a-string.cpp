class Solution {
public:
    string reverseVowels(string s) {

        int i = 0, j = s.size() - 1;

        vector<int> vowelIndex;

        for (i = 0; i < s.size(); i++) {

            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U') {

                vowelIndex.push_back(i);
            }

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowelIndex.push_back(i);
            }
        }

        i=0  , j = vowelIndex.size()-1;
        while(i<j)
        {
            int left_vowel = vowelIndex[i] , right_vowel = vowelIndex[j];
            swap(s[left_vowel] , s[right_vowel]);
            i++;
            j--;
        }

        return s;
    }
};