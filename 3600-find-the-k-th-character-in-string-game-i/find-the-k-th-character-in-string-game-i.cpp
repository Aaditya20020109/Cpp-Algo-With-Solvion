class Solution {
public:
    char kthCharacter(int k) {

        string word = "a";
        while(word.size() < k)
        {
            string word2 = "";
            for(char &ch:word)
            {
                int ch_idx = ch - 'a';
                word2.push_back(((ch_idx+1)%26) + 'a');

            }
            word+=word2;
        }
        return word[k-1];
        
    }
};