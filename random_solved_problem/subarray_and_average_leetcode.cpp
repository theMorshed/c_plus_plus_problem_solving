/*
Link: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
Solved at 17.12.23 11:15AM
*/

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int size = arr.size();
        long long sum = 0, average;
        int count = 0;

        int i = 0, j = 0;
        while (j < size)
        {
            sum += arr[j];

            if (j < k - 1)
            {
                j++;
            }
            else
            {
                average = sum / k;
                if (average >= threshold)
                {
                    count++;
                }
                sum -= arr[i];
                i++;
                j++;
            }
        }

        return count;
    }
};