
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //floyd algorithme

        int slow = nums[0];
        int fast = nums[0];
        slow = nums[slow];
        fast = nums[fast];
        fast  = nums[fast];
        while(slow!=fast)
        {
             slow = nums[slow];
        fast = nums[fast];
        fast  = nums[fast];
        }
        slow = nums[0];
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];

        }
        return slow;
       
      
        
    }
};