class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
          int removeAlphCount = 0;
        for (int i = 1; i < word.length();) {
            int prev = word[i-1] - 'a';
            int curr = word[i] - 'a';
            // System.out.println(curr+" "+prev);
            if (curr == prev || (curr + 1) == prev || (curr - 1) == prev || (prev + 1) == curr || (prev - 1) == curr) {
                removeAlphCount++;
                i+=2;
            }
            else i++;
        }
        return removeAlphCount;
        
    }
};