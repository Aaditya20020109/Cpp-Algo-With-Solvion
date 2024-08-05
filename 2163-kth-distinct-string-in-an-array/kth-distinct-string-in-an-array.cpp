class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string , int> m;
     
       
        for(string str : arr)
        {
            auto it = m.find(str);
            if(it==m.end()){//not present
            m.insert({str , 1});

            }else{//present
                 
                m[str]++;
            }
        }

       

        for(string str : arr)
        {
            if(m[str] == 1)
            {
                k-=1;
                if(k == 0)
                {
                    return str;
                }
            }
        }

        return "";


        

        
    }
};