class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // if kth smallest ===> we use the max heap . 
        // if kth largest ===>  we use the min heap . 
        priority_queue<vector<double>> pq;//{fraction , arr[i],arr[j]}

        for(int i=0;i<arr.size() - 1;i++)
        {
            for(int j=i+1;j<arr.size() ; j++)
            {

                double fraction =(double) arr[i]/arr[j];
                pq.push( vector<double> {fraction,(double)arr[i],(double)arr[j]} );
                if( pq.size() > k )pq.pop();
            }
        }

        auto vec = pq.top();
        vector<int> ans;
        ans.push_back((int)vec[1]);
        ans.push_back((int)vec[2]);
        return ans;

        
    }
};