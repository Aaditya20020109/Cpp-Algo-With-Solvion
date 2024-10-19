class Solution {
public:
    string invert(string s)
    {
        string res = "";
        for(char &ch:s)
        {
            if(ch=='0')
            {
                res.push_back('1');
            }else{
                res.push_back('0');
            }

        }
        reverse(res.begin() , res.end());
        return res;





    }
    char findKthBit(int n, int k) {

        string res = "0";
        int index = 2;
       
        while(index<=n)
        {
            string rev_str = invert(res);
            res+="1";
            res+=rev_str;
            index++;
        }

        return res[k-1];

        
    }
};