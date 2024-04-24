class Solution {
public:
    long long dp[100005];


    long long T(int n)
    {

        if(dp[n] != -1)return dp[n];

        if(n == 0 )return 0;

        if(n == 1 || n == 2)return 1;

        int m = 0;
        
        while( m <= n )
        {
            long long x = T(m) + T(m+1) + T(m+2);
             
             dp[m+3] = (int)x;

            m +=1; 
        }

        return dp[n];

    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));

        return (int)T(n);

        
    }
};