class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();

        vector<int> result(n,0);

        bool skip  = false;

        int i=0,j=0;

        sort(begin(deck),end(deck));




        while(i < n)
        {
            if(result[j] == 0)
            {
                if(skip == false)
                {
                    result[j] = deck[i];
                    i+=1;


                }

                skip =! skip;

            }



            j = (j+1)%n;
        }

        return result;
        
    }
};