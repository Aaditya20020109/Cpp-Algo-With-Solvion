class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        
        int n = nums.size();
        int maxEle =0;
        for(int i=0;i<n;i++)
        {
            maxEle = max(nums.at(i),maxEle);
        }
        long long ans =0;
        int count =0;
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums.at(j)==maxEle)count++;
            if(count>=k)
            {
                while(count>=k)
                {
                ans+=(n-j);
                if(nums.at(i)==maxEle) 
                {
                    count--;
                }
                i++;
                }
            }
        }
        return ans;
        
    }
};