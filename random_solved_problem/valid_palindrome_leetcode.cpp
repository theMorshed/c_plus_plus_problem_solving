// Leetcode: https://leetcode.com/problems/valid-palindrome/
// solved at december 12, 2023. 11:00 pm
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int size = s.size();
        string first;
        bool is_palindrome = true;

        for (int i = 0; i < size; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    first.push_back(char(s[i] + 32));
                }
                else
                {
                    first.push_back(s[i]);
                }
            }
        }

        int first_size = first.size();

        for (int i = 0, j = first_size - 1; i < first_size / 2; i++, j--)
        {
            if (first[i] != first[j])
            {
                is_palindrome = false;
                break;
            }
        }

        return is_palindrome;
    }
};

int main() 
{
    Solution s;
    cout << s.isPalindrome("racecar") << endl;

    if (s.isPalindrome("A man, a plan, a canal: Panama")) {
        cout << "true" << endl;
    }

        return 0;
}