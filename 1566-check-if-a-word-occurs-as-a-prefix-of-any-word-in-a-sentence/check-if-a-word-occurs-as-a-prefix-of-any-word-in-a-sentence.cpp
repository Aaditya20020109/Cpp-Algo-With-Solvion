class Solution {
public:

int helper(string s1 , string s2)
{

if(s1.size() < s2.size())return -1;

int i=0 , j = s2.size();

if(s1.substr(i,j) == s2)return 1;

return 0;

}
int isPrefixOfWord(string sentence, string searchWord) {
int i = 0 , j = i;

int n = sentence.size();
int index = 1;

while(i<n)
{
    j = i;
    while(j<n && sentence[j]!=' ')
    {
        j++;

    }
    
    if(helper(sentence.substr(i , j) , searchWord) == 1)
    {
        return index;

    }
    i = j+1;
    index++;

    

}


return -1;

}
};