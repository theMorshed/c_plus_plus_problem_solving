// Link: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        // declare variable and two frequency array 
        int n = txt.size();
        int k = pat.size();
        int freq1[26] = {0};
        int freq2[26] = {0};

        // make pattern fequency array from given pat string
        for (int i = 0; i < k; i++)
        {
            freq1[pat[i] - 'a']++;
        }
        int ans = 0, i = 0, j = 0;

        while (j < n)
        {
            freq2[txt[j] - 'a']++;

            // if window size less than k then increase window
            if (j < k - 1)
            {
                j++;
            }
            else
            {
                // after hit window size calculate is anagram there
                // after calculation window move with i and j variable
                bool is_anagram = true;
                for (int m = 0; m < 26; m++)
                {
                    if (freq1[m] != freq2[m])
                    {
                        is_anagram = false;
                        break;
                    }
                }

                if (is_anagram)
                {
                    ans++;
                }
                freq2[txt[i] - 'a']--;
                i++;
                j++;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends