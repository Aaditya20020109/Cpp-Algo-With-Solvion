class Solution {
public:
    static bool MyFunction(int a , int b)
    {
        string s1 = to_string(a);
        string s2 = to_string(b);

        return (s1+s2) > (s2+s1);

        
    }
    string largestNumber(vector<int>& nums) {
        sort(begin(nums), end(nums) ,MyFunction );

        if(nums[0]==0)return "0";
        string res = "";
        for(int i:nums)
        {
            res+=to_string(i);
        }

        return res;

        
        
    }
};