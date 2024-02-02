
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       vector<int> freq(nums.size()+1,0);
       for(int e:nums)
       {
           freq[e]++;

       }
       for(int i=0;i<nums.size();i++)
       {
           if(freq[i]>1)return i;
       }

    return -1;
        
    }
};