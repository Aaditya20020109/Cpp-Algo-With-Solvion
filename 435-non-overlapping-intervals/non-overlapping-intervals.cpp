class Solution {
public:
  static bool  sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sortcol);
        int i=0;
        int cnt =0;
        for(int j=1;j<intervals.size();j++)
        {
            if(intervals[j][0]<intervals[i][1])
            {
                cnt+=1;
            }
            else{
                i=j;
            }
        }
        return cnt;
    }
};