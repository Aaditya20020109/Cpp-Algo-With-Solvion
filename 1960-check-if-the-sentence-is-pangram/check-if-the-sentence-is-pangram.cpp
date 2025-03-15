class Solution {
public:
bool checkIfPangram(string sentence) {
     vector<int> countChar(26,0);
     for(char &ch:sentence)
     {
      if(ch!=' ')
      {
        int index = -1;
        if(ch>='A' && ch<='Z')
        {
          //convert it into lowercase alphabet.
          index = ch - 'A';
        }else{
          index = ch - 'a';
        }

        countChar[index]++;
      }

     }

     for(int n:countChar)
     {
      if(n == 0)return false;
     }



      return true;
    }
};