class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
        vector<vector<int>> res;
        bool inserted = false;
        while(i<intervals.size())
        {
            vector<int> inter_val = intervals[i];
            if(inter_val[1]<newInterval[0])
            {
                // go forward
                res.push_back(inter_val);
                i++;
            }
            else if(inter_val[0]>newInterval[1])
            {
                // insert
                res.push_back(newInterval);
                inserted=!inserted;
                break;
            }
            else
            {
                //merge
                newInterval[0] = min(newInterval[0],inter_val[0]);
                newInterval[1] = max(newInterval[1],inter_val[1]);
                intervals.erase(intervals.begin()+i);
            }
        }

        if(inserted==false)
        {
            res.push_back(newInterval);

        }

        while(i<intervals.size())
        {
            vector<int> inter_val = intervals[i];
            res.push_back(inter_val);
            i++;
        }
        return res;
        
    }
};