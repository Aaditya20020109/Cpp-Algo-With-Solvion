class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
 

  

     
      
      priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
      
      for(int i=0 ; i<nums.size() ; i++)
      {
        pq.push(make_pair(nums[i], i));
      }
      
      while(k!=0)
      {
        pair p2 = pq.top();
        int ele = p2.first;
        int idx = p2.second;
        
        nums[idx]*=multiplier;
 
        pq.pop();
 
        pq.push(make_pair(nums[idx], idx));
        
        k-=1;
        
      }
      
      return nums;

        
    }
};