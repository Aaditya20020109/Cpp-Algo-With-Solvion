class Solution {
public:
   
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> m;
        for (auto v : nums1) {
            if(m.find(v[0])!=m.end())
            {

            m[v[0]] += v[1];
            }

            else{
                m.insert({v[0],v[1]});
            }
        }

        for (auto v : nums2) {
            if(m.find(v[0])!=m.end())
            {

            m[v[0]] += v[1];
            }

            else{
                m.insert({v[0],v[1]});
            }
        }

        vector<vector<int>> res;
        for (auto it = m.begin(); it != m.end(); it++) {
            vector<int> v = {it->first, it->second};

            res.push_back(v);
        }

        // sort according to the key
       

        return res;
    }
};