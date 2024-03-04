/*
https: // leetcode.com/problems/sliding-window-maximum/
solved time: December 11, 2023 at 1:15pm
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;
    int i = 0, j = 0;
    multiset<int, greater<int>> maximum;

    // start main loop for slidding window
    while (j < n)
    {
        maximum.insert(arr[j]);

        // if window size less than k then increase window
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            // after hit window size calculate the other calculation
            // after calculation window move with i and j variable
            cout << *maximum.begin() << endl;
            maximum.erase(maximum.find(arr[i]));
            i++;
            j++;
        }
    }

    return 0;
}