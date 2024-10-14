class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue <int> pq;
        for(int n:nums)
        {
            pq.push(n);
        }
      
        
        while(k!=0)
        {
            
            score+=pq.top();
            int n = ceil(pq.top()/(double)3);
            cout<<n<<endl;
            pq.pop();
            pq.push(n);
            k-=1;

        }

        return score;
        
    }
};