class Solution {
public:
    void reverse(vector<int>& nums,  int i , int j)
    {
        int st = i , en = j;
        while(st<en)
        {
            int temp = nums[st];
            nums[st] = nums[en];
            nums[en] = temp;
            st++;
            en--;
        }
        
    }
    void nextPermutation(vector<int>& nums) {

       int n = nums.size();

       int gola_index = -1;

       for(int i=n-1 ; i>0 ; i--)
       {
        if(nums[i-1]<nums[i])
        {
            gola_index = i-1;
            break;

        }
       }


        if(gola_index == -1)
        {
            reverse(nums , 0 , n-1);
        }else{


            for(int i = n-1 ; i>gola_index ; i--)
            {
                if(nums[gola_index] < nums[i])
                {
                    int temp = nums[gola_index];
                    nums[gola_index] = nums[i];
                    nums[i] = temp;
                    break;
                }
            }


            reverse(nums , gola_index+1 , n-1);


        }




        
          
        
    }
};