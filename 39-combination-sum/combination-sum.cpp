class Solution {
public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> path;
        sort(begin(candidates),end(candidates));
        backtrac(0,candidates,target,path,result);
        return result;
    }
private:
    void backtrac(int start,vector<int> candidates,int target,vector<int>& path,vector<vector<int>>& result)
    {
        if(target==0)
        {
            result.push_back(path);
            return;

        }
        if(target<0)
        {
            return ;
        }

        for(int i=start;i<candidates.size();i++)
        {
            path.push_back(candidates[i]);
            backtrac(i,candidates,target-candidates[i],path ,result);
            path.pop_back();
        }
    }
};