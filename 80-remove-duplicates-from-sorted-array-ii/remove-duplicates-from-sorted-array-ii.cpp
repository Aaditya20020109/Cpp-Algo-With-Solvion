class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int n:nums)
        {
            if(m.find(n)==m.end())
            {
            m.insert({n,1});
            }else{
                m[n]++;
            }
        }
        int i=0;
        int count  = 0;
        for(auto k = m.begin() ; k!=m.end() ; k++)
        {
           if(m[k->first]>= 2)
           {
            nums[i++] = k->first;
            nums[i++] = k->first;
            count+=2;
           }else{
             nums[i++] = k->first;
             count+=1;

           }
        }
        return count;
        
    }
};