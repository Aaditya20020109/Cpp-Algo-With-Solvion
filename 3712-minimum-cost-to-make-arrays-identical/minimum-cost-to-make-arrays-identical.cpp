class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {

        int n = arr.size();
        long long diff = 0,afterSortDiff = 0;

        for(int i=0 ; i<n ; i++)
        {
            diff+= abs(arr[i] - brr[i]);
        }

        sort(arr.begin() , arr.end());
        sort(brr.begin() , brr.end());

        for(int i=0 ; i<n ; i++)
        {
            afterSortDiff+= abs(arr[i] - brr[i]);
        }

        return min(diff , afterSortDiff+k);




        
    }
};