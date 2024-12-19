class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int n = s.size();

        string res;

        vector<int> count(26, 0);
        priority_queue<char> pq;
        for (char& ch : s) {
            count[ch - 'a']++;
           
        }

        for(int i = 0 ; i<26 ; i++)
        {
            if(count[i ] > 0)
            {
                char ch = i + 'a';
                pq.push(ch);
            }
        }
        int i = 25;

        while (!pq.empty()) {
            char ch = pq.top();
            pq.pop();

            int freq = min(count[ch - 'a'], repeatLimit);

            res.append(freq, ch);
            count[ch - 'a'] -= freq;

            if (count[ch - 'a'] > 0 && !pq.empty()) {
                char ch2 = pq.top();
                pq.pop();
                res.push_back(ch2);
                count[ch2 - 'a']--;
                if (count[ch2 - 'a'] > 0)
                    pq.push(ch2);
                pq.push(ch);
            }
        }

        return res;
    }
};