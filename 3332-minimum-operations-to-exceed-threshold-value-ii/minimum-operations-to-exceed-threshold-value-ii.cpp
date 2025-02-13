class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        priority_queue <long long , vector<long long>, greater<long long> > pq; 

        for(int i:nums)
        {
            pq.push(i);
        }

        int operation = 0;
        while(pq.size() >= 2 && pq.top() < k)
        {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            long long minNum = min(first , second) ;
            minNum*=2;
            long long maxNum = max(first , second);
            long long  newNumber =  minNum + maxNum;
            pq.push(newNumber);

            operation++;

        }

        return operation;


        
    }
};