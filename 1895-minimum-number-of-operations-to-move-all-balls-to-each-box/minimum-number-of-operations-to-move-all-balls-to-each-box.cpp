class Solution {
public:
    vector<int> minOperations(string boxes) {


        vector<int> ones_idx;

        int n = boxes.size();

        for(int i=0 ; i<n ; i++)
        {
            if(boxes[i] == '1')
            {
                ones_idx.push_back(i);
            }
        }


        vector<int> res(n,0);

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<ones_idx.size() ; j++)
            {
                res[i] += abs(i-ones_idx[j]);
            }
        }


        return res;
        
    }
};