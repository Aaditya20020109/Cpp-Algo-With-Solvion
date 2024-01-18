class Solution {
public:
    int stairs(int n, map<int, int>& m) {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        if (m.find(n) != m.end()) {
            return m[n];
        }
        int count = (stairs(n - 1, m) + stairs(n - 2, m)) % 10000000007;
        if (m.find(n) == m.end())
            m.insert({n, count});
        return count;
    }
    int climbStairs(int n) {
        map<int, int> m;
        return stairs(n, m);
    }
};