class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {

        int n = nums.size();
        int max_i = nums[0] + 0; // value[i] + i;
        int maxScore = 0;
        for(int i=1 ; i<n ; i++)
        {
            maxScore = max(maxScore , max_i+nums[i]-i); // get max in maxi and 
            max_i = max(max_i , nums[i]+i);//get max (value[i] + i)
        }

        return maxScore;
        
    }
};