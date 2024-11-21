class Solution
{
    public:
        int findUnsortedSubarray(vector<int> &nums)
        {
            vector<int> arr;

            int n = nums.size();

            for (int i: nums)
            {
                arr.push_back(i);
            }

            sort(arr.begin(), arr.end());

            int left = -1;

            for (int i = 0; i < n; i++)
            {
                if (nums[i] != arr[i])
                {
                    left = i;
                    break;
                }
            }

            if (left == -1) return 0;

            int right = -1;

            for (int i = n - 1; i >= 0; i--)
            {
                if (nums[i] != arr[i])
                {
                    right = i;
                    break;
                }
            }

            return right-left+1;
        }
};