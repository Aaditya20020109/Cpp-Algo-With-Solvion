class Solution {
public:
int max_OR;
int count;
    void countSubset(vector<int>& nums,int or_1,int i)
    {
        if(i==nums.size())
        {
            if(or_1==max_OR)count++;
            return;

        }
        countSubset(nums,(or_1|nums[i]),i+1);
        countSubset(nums,or_1,i+1);

        
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        int OR =0;
        for(int n:nums)OR = OR|n;
        max_OR = OR;
        count =0;
        countSubset(nums,0,0);
        return count;

        
    }
};