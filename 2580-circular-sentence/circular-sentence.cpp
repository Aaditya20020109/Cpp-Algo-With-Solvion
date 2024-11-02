class Solution {
public:
    bool isCircularSentence(string sentence) {

        vector<string> strs;
        stringstream ss(sentence);
        string word;
        while(getline(ss , word , ' '))
        {
            strs.push_back(word);
            cout<<word<<endl;
        }
        int n = strs.size();
        int m = strs[n-1].size();
       if(strs[0][0]-'a'!=strs[n-1][m-1]-'a')return false;
        for(int i=0 ; i<n-1 ; i++)
        {
            int si = strs[i].size();
            if(strs[i][si-1]-'a' != strs[i+1][0]-'a')return false;
        }

        return true;
        
    }
};