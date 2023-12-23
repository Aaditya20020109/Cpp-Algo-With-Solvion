class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    int n=nums.size();
    vector<int> res(n,0);
    int i=0,j=1;
    for(int e:nums)
    {
        if(e%2==0)
        {
            res[i] = e;
            i+=2;
        }
        else {
            res[j] = e;
            j+=2;
        }
    }
    
    return res;
        
    }
};