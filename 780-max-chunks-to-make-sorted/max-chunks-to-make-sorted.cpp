class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n = arr.size();

        int sum = 0;
        vector<int> v(n,0);
        for(int i=0 ; i<n ; i++)
        {
            sum+=arr[i];
            v[i] = sum;

        }
        int count =  0;

        sort(arr.begin() , arr.end());
        int EachIndexSum = 0;
        for(int i=0 ; i<n ; i++)
        {
            EachIndexSum+=arr[i];
            if(EachIndexSum == v[i])
            {
                count++;
            }

        }

        return count;

    }
};