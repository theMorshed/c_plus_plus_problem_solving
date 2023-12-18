/*
Link: https://leetcode.com/problems/minimum-size-subarray-sum/
Solved at 18.12.23 10:47PM
*/
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = 0;
        long long currentSum = 0;
        int ans = INT_MAX;

        while (j < n)
        {
            currentSum += nums[j];

            if (currentSum > target)
            {
                while (currentSum >= target)
                {
                    currentSum -= nums[i];
                    i++;
                }
                i--;
                currentSum += nums[i];
            }

            if (currentSum >= target)
            {
                ans = min(ans, j - i + 1);
            }

            j++;
        }

        ans = (ans == INT_MAX) ? 0 : ans;

        return ans;
    }
};