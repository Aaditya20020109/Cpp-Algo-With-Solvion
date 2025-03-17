class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //2 pointer
        int i=0 , j=1;
        for(j=0 ; j<nums.size() ; )
        {
            if(nums[j] == nums[i])j++;
            else {
                if((j-i)%2 != 0) return false;
                i = j;
                j++;
            }
        }

        return  true;
        
    }
};