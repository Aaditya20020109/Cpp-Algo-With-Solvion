class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        set<int> distinct_set;   
        int nextAvailable = INT_MIN;
        sort(nums.begin() , nums.end());
        for(int n:nums)
        {
            int LowerBound = n-k;
            int UpperBound = n+k;
            int adjusted = max(LowerBound , nextAvailable);
            //checking is it lowerBound it far greater or not because we increase the nextAvailable on by 1.
            if(adjusted <= UpperBound)
            {
                distinct_set.insert(adjusted);
                nextAvailable = adjusted + 1;//so  we get distinct number in the range.
                
            }
            //else otherwise dont change that number.

        }

        return distinct_set.size();
        
    }
};