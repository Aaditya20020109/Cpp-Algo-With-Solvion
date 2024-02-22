class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> people_trust;
        unordered_map<int,int> judge_trust;
        for(int i=1;i<=n;i++)
        {
            people_trust.insert({i,0});
            judge_trust.insert({i,0});

        }
        for(int i=0;i<trust.size();i++)
        {
            people_trust[trust[i][1]]++; // ese judge jinpe bharosa kiya ja raha hai.
            judge_trust[trust[i][0]]++;// judge kine bharosa karta hai.
        }


        // people_trust == n-1 of any element
        // judge_trust  ==  0 of any element
        unordered_map<int,int> :: iterator it;
        for(it=people_trust.begin();it!=people_trust.end();it++)
        {
            if(it->second==n-1 && judge_trust[it->first]==0)return it->first;
        }
        return -1;


    }
};