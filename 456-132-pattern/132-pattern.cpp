class Solution
{
    public:
        bool find132pattern(vector<int> &nums)
        {
            // Monotonic stack => where we stored the element in order.
            stack<int> nums_2;
            stack<int> nums_3;
            int n = nums.size();
            if (n < 3) return false;
            nums_2.push(nums[n - 1]);
            int i = n - 2;
            while (i >= 0)
            {
                int curr = nums[i--];
                if (!nums_3.empty() && !nums_2.empty())
                {
                    if (curr < nums_3.top())
                    {
                        return true;
                    }
                }
                while (!nums_2.empty() && curr > nums_2.top())
                {
                    nums_3.push(nums_2.top());
                    nums_2.pop();
                }
                nums_2.push(curr);
            }
            return false;
        }
};