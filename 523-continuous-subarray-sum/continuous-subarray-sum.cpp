class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int sum = 0;

        unordered_map<int,int> m;
        m.insert({0,-1});

        for(int i=0;i<nums.size() ; i++)
        {
            sum+=nums[i];
           
            int remainder = sum % k;
            if(m.find(remainder)!=m.end())
            {
                if(i - m[remainder] >=2)return true;
               
            } else{
                    m[remainder] = i;
                }
            

        }

        return false;
        
    }
};