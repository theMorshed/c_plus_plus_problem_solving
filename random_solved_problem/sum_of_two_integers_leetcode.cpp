/*
Link: https://leetcode.com/problems/sum-of-two-integers/
Solved at: 19.12.23 1:35PM
*/

class Solution
{
public:
    int getSum(int a, int b)
    {
        int sum = a;
        if (b > 0)
        {
            for (int i = 0; i < b; i++)
            {
                sum++;
            }
        }
        if (b < 0)
        {
            for (int i = 0; i < abs(b); i++)
            {
                sum--;
            }
        }

        return sum;
    }
};