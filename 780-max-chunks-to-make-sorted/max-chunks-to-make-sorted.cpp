class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        int n = arr.size();
        vector<int> maxArr(n,0);
        vector<int> minArr(n , 0);

        maxArr[0] = arr[0];
        minArr[n-1] = arr[n-1];

        int count = 1;
        int maxEle = arr[0];
        for(int i=1;  i<n ; i++)
        {
            maxEle = max(arr[i] , maxEle);
            maxArr[i] = max(arr[i]  , maxEle);

        }

        int minEle = arr[n-1];
        for(int i = n-2 ; i>=0 ; i--)
        {
            minEle = min(arr[i] , minEle);
            minArr[i] = min(arr[i]  , minEle);

        }

        for(int i=1 ; i<n ; i++)
        {
            int prefixMaxEle = maxArr[i-1];
            int suffixMinEle = minArr[i];
            if(prefixMaxEle < suffixMinEle )
            {
                count-=1;
                count+=2;

            }
        }

        return count;


        
    }
};