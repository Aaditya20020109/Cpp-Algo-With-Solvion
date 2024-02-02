class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       
        
        vector<int> sq_digit = {
            12,      23,      34,      45,       56,       67,
            78,      89,      123,     234,      345,      456,
            567,     678,     789,     1234,     2345,     3456,
            4567,    5678,    6789,    12345,    23456,    34567,
            45678,   56789,   123456,  234567,   345678,   456789,
            1234567, 2345678, 3456789, 12345678, 23456789, 123456789};
        int n = sq_digit.size();
        // int low = 1000,high = 13000;
        int i = 0;
        if(low>123456789)return {};
        if (low > high)
            return {};
        while (low > sq_digit[i]) {
            i++;
        }
        vector<int> res;
        if (i == n)
           { cout << "not found" << endl;}
        else {
            while (sq_digit[i] <= high)
            {
                res.push_back(sq_digit[i]);
                i++;
                if(i==n)break;
            }
        }
        return res;
    }
};