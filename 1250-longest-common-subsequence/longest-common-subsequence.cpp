class Solution {
public:
    int m,n;
    int mem[1001][1001];
    int solve(string& s1,string& s2,int i,int j)
    {
        if(i>=m || j>=n)
        return 0;

        if(mem[i][j]!=-1)
        return mem[i][j];


        if(s1[i]==s2[j])
        {
            return 1 + solve(s1,s2,i+1,j+1);
        }


        int include_i = solve(s1,s2,i+1,j);
        int include_j = solve(s1,s2,i,j+1);

        return mem[i][j] = max(include_i,include_j);

    }
    int longestCommonSubsequence(string s1, string s2) {
        
        m = s1.size();
        n = s2.size();
        memset(mem,-1,sizeof(mem));

        return solve(s1,s2,0,0);
    }
};