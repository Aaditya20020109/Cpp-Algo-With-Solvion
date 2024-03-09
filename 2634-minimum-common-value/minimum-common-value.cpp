class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       
       map<int,int> m;
       for(int val:nums2)
       {
           if(m.find(val)!=m.end())
           {
               m[val]++;
           }
           else
           {
               m.insert({val,1});
           }
       }
       sort(nums1.begin(),nums1.end());
       for(int val:nums1)
       {
           if(m.find(val)!=m.end())return val;
       }
       return -1;


        
    }
};