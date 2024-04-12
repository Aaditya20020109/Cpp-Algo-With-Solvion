class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        

        queue<int> q;

        int n = deck.size();

        for(int i=0;i<n;i++)
        q.push(i);

        sort(begin(deck),end(deck));

        vector<int> ans(n,0);
        int i=0;


        while(!q.empty())
        {
            int idx = q.front();

            q.pop();

            

            ans[idx] = deck[i];
            
            i+=1;

            if( !q.empty() )
            {
                q.push(q.front());
                q.pop();
                


            }

        }

        return ans;





    }
};