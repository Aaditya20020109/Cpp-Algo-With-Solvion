class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TC => O(N)
        // SC => O(N)
        unordered_map<int,int> m ;
        // firstnumber + secondNumber = target
        for(int currIdx = 0 ; currIdx<nums.size() ; currIdx++)
        {
            int firstNumber =  target - nums[currIdx];
            if(m.find(firstNumber) != m.end())
            {
                return {m[firstNumber] , currIdx};
            }
            m.insert({nums[currIdx] , currIdx});
        }

        return {};

        
        
    }
};