/*
Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
Solved at 17.12.23 2:33PM
*/
class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int n = s.size();
        int maximum = INT_MIN;
        int i = 0, j = 0, vowel_count = 0;

        while (j < n)
        {
            // count vowel from all window
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                vowel_count++;
            }

            // if window size less than k then increase window
            if (j < k - 1)
            {
                j++;
            }
            else
            {
                // after hit window size calculate the other calculation
                // after calculation window move with i and j variable
                maximum = max(maximum, vowel_count);
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    vowel_count--;
                }
                i++;
                j++;
            }
        }

        return maximum;
    }
};