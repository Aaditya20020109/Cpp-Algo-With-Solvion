class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , vector<int>> m;

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(m.count(target-nums[i]))
            {
                vector<int> res;
                vector<int> point = m[target-nums[i]];
                int index1 = i , index2 = point[point.size() - 1];
                res = {index1 , index2};
                return res;



            }
            m[nums[i]].push_back(i);
        }
        return {-1,-1};
        
    }
};