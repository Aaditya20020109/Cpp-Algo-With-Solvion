class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        set<int> s;
        int i = 0;
        int j = 0;
        int count = 0;

        int n = arr.size();

        while (i < n) {
            while (j != n && arr[i] == arr[j]) {
                j++;
                count++;
            }
            if (s.find(count) != s.end())
                return false;
            s.insert(count);
            count = 0;
            i = j;
        }
        return true;
    }
};