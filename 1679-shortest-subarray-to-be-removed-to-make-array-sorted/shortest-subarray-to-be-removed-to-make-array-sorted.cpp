class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size() ; 

        int j = n-1;

        while(j>0 && arr[j]>=arr[j-1])
        {
            j--;
        }

        if(j == 0)return 0;

        int blocker_state = j-1;

        int i = 0;

        if( blocker_state == i)
        {
            return 1;
        }

        int mini = j;

        while( i < j && (i==0 || arr[i] >= arr[i-1]))
        {
            

            while(j<n && arr[i] > arr[j])
            {
               
                j++;
            }


           
                mini = min(j-i-1 , mini);
            

            i++;

        }


        return mini;
        
    }
};