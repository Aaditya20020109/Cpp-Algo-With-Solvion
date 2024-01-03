class Solution
{
    public:
        int numOfBeams(vector<int>& v)
        {
            int n = v.size();
      
            int i=0;
            int res=0;
            while(i<n)
            {
                if(v[i]==0)i++;
                else break;
            }
            if(i==n) return 0;
            int backLasercount = v[i];
            i++;
            
            while(i<n)
            {
                if(v[i]!=0)
                {
                    res = res+(backLasercount*v[i]);
                    backLasercount = v[i];
                }
                i++;
            }
            return res;
        }
    int numberOfBeams(vector<string> &bank)
    {
        if(bank.size()==1)return 0;
        vector<int> v;
        int n = bank.size();
        for (string s: bank)
        {
            int c = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1') c++;
            }
            v.push_back(c);
        }
        return numOfBeams(v);
      
    }
};