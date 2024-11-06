class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();

         map<int , vector<int>> m;
        
        for(int i=0 ; i<n; i++)
        {
            int pass_ki_distance = abs(arr[i] - x);
           
            
            if(m.find(pass_ki_distance)!=m.end())
            {
                
                m[pass_ki_distance].push_back(arr[i]);
                
                
            }else{
                vector<int> v;
                v.push_back(arr[i]);
                m.insert({pass_ki_distance , v} );
                
                
            }
            
        }
        
        vector<int> ans;
        
        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            
            if(ans.size()!=k )
            {
                vector<int> v = it->second;
                sort(begin(v) , end(v));
                int j = 0;
                while(j<v.size())
                {
                    ans.push_back(v[j++]);
                    if(ans.size() == k)
                    {
                         break;
                     }
                }
                
            }
            
            if(ans.size() == k)
            {
                break;
            }
        }
        sort(begin(ans) , end(ans));
        
        return ans;
        
    }
};