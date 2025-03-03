class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // unordered_map<int , vector<int>> m;
        // // 0-->{ele less than pivot }
        // // 1--> {ele equal to  pivot}
        // // 2--> {ele greater than pivot}
        // // TC --> O(N) SC --> O(N)

        // for(int e:nums )
        // {
        //     if(e>pivot)
        //     {
        //         m[2].push_back(e);

        //     }else if(e<pivot)
        //     {
        //         m[0].push_back(e);


        //     }else{
        //         m[1].push_back(e);


        //     }
        // }

        // vector<int> res = m[0];
        // res.insert(res.end() , m[1].begin() , m[1].end());
        // res.insert(res.end() , m[2].begin() , m[2].end());

        // return res;


        // 2nd Approach

        vector<int> res;

        for(int i=0 ; i<nums.size() ; i++)
        {

            if(nums[i]<pivot)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0 ; i<nums.size() ; i++)
        {
             if(nums[i]==pivot)
            {
                res.push_back(nums[i]);
            }
            
        }
        for(int i=0 ; i<nums.size() ; i++)
        {
             if(nums[i]>pivot)
            {
                res.push_back(nums[i]);
            }
        }

        return res;
        
    }
};