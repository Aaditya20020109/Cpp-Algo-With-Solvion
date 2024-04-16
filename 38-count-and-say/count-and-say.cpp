class Solution {
public:
    string ans = "";
    void getStringFromCount(int n)
    {

       
        vector<int> v;
        while(n!=0)
        {
            int digit = n % 10;
            v.push_back(digit);
            n/=10;


        }

        reverse(begin(v),end(v))
        ;

        for(int i = 0 ; i < v.size() ; i++)
        {
            ans.push_back(v[i] + '0');



        }
        

    }

    string Form_New_String(string str)
    {
        int i = 0;
     


        int n = str.size();

        while(i < str.size())
        {
            int j = i+1;

            int count = 1;

            while(j<n && str[j] == str[i])
            {
                count++;
                j++;

            }

            
                getStringFromCount(count);
                ans.push_back(str[i]);
                i = j;

           
        }
        cout<<ans<<endl;

        return ans;

    }
    string countAndSay(int n) {

        if(n == 1)return "1";
        if(n == 2)return "11";
        string str = "11";
        string res = "";
        for(int i=3 ; i<=n ; i++)
        {
            str = Form_New_String(str);
            ans = "";
        }

       
        return str;
    }
};