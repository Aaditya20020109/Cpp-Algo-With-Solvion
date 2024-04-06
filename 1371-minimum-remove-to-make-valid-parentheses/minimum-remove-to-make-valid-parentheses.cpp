class Solution {
public:
    string minRemoveToMakeValid(string s) {

        int n = s.size();

        vector<char> arr(s.begin(),s.end());

        int _openBrac =0;

        for(int i=0;i<n;i++)
        {
            if(arr[i] == '(')
            {
                _openBrac+=1;
            }
            else if(arr[i]==')')
            {
                if(_openBrac==0)
                {
                    arr[i] = '*';

                }
                else{
                    _openBrac-=1;
                }
            }
        }


        for(int i=n-1 ; i>=0 ; i--)
        {

              if(_openBrac>0 && arr[i]=='(')
              {
                arr[i] = '*';
                _openBrac-=1;
              }  

        }


        string ans = "";

        for(char ch:arr)
        {
            if(ch!='*')
            {
                ans.push_back(ch);
            }
        }
        return ans;
        
    }
};