class Solution {
public:
    int digit_sum(int n)
    {
        int sum = 0;
        while(n!=0)
        {
            int digit = n%10;
            sum+=digit;
            n/=10;
        }

        return sum;
    }
    int maximumSum(vector<int>& nums) {

        sort(nums.begin() , nums.end());

        int i=0 , j=nums.size()-1;

        int maximum_digitSum = 0;

        unordered_map<int,vector<int>> m;
        for(int i=0 ; i<nums.size() ; i++)
        {

            int digitSum = digit_sum(nums[i]);
            m[digitSum].push_back(nums[i]);

        }

        for(auto it=m.begin() ; it!=m.end() ; it++)
        {
            if(it->second.size() >= 2)
            {
                // int first_index = 0 , last_index = it->second.size()-1;
                // maximum_digitSum = max((it->second[first_index]+it->second[last_index]) , maximum_digitSum );

                for(int i=1 ; i<it->second.size() ; i++)
                {
                    
                        int sum = it->second[i] + it->second[i-1];
                        maximum_digitSum = max(sum , maximum_digitSum);
                    
                }

            }
        }

        return maximum_digitSum==0 ? -1 :maximum_digitSum;
        
    }
};