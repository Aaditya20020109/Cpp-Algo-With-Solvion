class Solution {
public:

    void side_rotate(vector<int>& nums , int start , int end)
    {
        int i = start,j = end;
        while(i<j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

    }
    void rotate(vector<int>& nums, int k) {

    while(nums.size() < k)
       {
       
        k = k-nums.size();

       }

        // first reverse from left
        int i = nums.size()-k;
        int j = nums.size()-1;
        side_rotate(nums,i,j);

        i=0 , j = nums.size()-k-1;
         side_rotate(nums,i,j);
       

        i = 0  , j=nums.size()-1;
        side_rotate(nums,i,j);

       


        
    }
};