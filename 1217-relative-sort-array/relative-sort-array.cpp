class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int,int> m;
        for(int n:arr1)
        m[n]++;


        vector<int> ans;
        for(int i=0 ; i < arr2.size() ; i++)
        {
            int count = m[arr2[i]];
            for(int j=0 ; j<count ; j++)
            {
                ans.push_back(arr2[i]);
            }
        }


        m.clear();

        for(int n : arr2)
        {
            m[n]++;
        }

        sort(begin(arr1) , end(arr1));
        

        for(int n:arr1)
        {
            if(m.find(n)==m.end())
            {
                ans.push_back(n);
            }
        }
        return ans;
        
    }
};