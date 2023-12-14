// Leetcode: https://leetcode.com/problems/concatenation-of-array/
// solved at december 12, 2023. 11:00 pm
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans;
        for (int i = 0; i < size; i++)
        {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < size; i++)
        {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};

int main()
{
    Solution concate;
    vector<int> nums = {1, 3, 2, 1};

    vector<int> ans_nums = concate.getConcatenation(nums);

    for (auto num: ans_nums) {
        cout << num << " ";
    }

    return 0;
}