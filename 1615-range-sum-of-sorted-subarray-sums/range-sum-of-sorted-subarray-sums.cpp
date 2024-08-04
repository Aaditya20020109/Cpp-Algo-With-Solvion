class Solution {
public:
typedef pair<int , int > P;
int M = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue <P, vector<P>, greater<P> > pq; 

        for(int i=0 ; i<nums.size() ; i++)
        {
            pq.push({nums[i] ,  i});
        }
        
        int result = 0;

       for(int count = 1 ; count <=right ; count++)
       {
            auto p = pq.top() ;
            pq.pop();


            int sum = p.first;
            int index = p.second;
            if(count>=left)
            result = (result + sum) % M;

            int next_index = index + 1;
            P new_pair;
            if(next_index < nums.size())
            {
            new_pair.first = sum + nums[next_index];
            new_pair.second = next_index;
            pq.push(new_pair);
            }
  
        }

        
        return result ;

      

        
    }
};