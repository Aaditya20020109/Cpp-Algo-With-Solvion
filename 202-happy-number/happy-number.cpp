class Solution {
public:
 int helper(int n) {
        int new_Num = 0;
        while (n != 0) {
            int digit = n % 10;
            new_Num += digit * digit;
            n /= 10;
        }
        return new_Num;
    }
    bool isHappy(int n) {
        
        
        unordered_set<int> visit;


        while(visit.find(n)==visit.end())
        {
            visit.insert(n);
            n = helper(n);
            if(n == 1)return true;


        }

        return false;
     
        
    }
};