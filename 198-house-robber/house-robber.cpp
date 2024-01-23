class Solution {
public:
    int rob(vector<int>& nums) {
        int even_house =0,odd_house =0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                even_house = max(even_house+nums[i],odd_house);
            }
            else 
            {
               odd_house = max(odd_house+nums[i],even_house);
            }
        }
        return max(odd_house,even_house);
    }
};