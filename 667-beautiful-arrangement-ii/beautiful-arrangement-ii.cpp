class Solution {
public:
    vector<int> constructArray(int n, int k) {

        int l = 1 , r = k+1;
        
        int i = 0;

        vector<int> res(n,0);


        while(l<=r)
        {
            if(i%2 == 0)
            {
                res[i++] = l++;

            }else{
                res[i++] = r--;

            }
        }

        for(int remaining_pointer = k+2 ; remaining_pointer<=n ; remaining_pointer++ )
        {
            res[i++] = remaining_pointer;
        }

        return res;
        
    }
};