// Brute force algorithm
// Time complexity: O(n*k)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare variables
    int n, k, sum, maximum = INT_MIN;
    cin >> n;
    int arr[n];

    // take input whole array
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    // take input subarray size   
    cin >> k;

    // outer loop for all window
    for (int i = 0; i <= n - k; i++) {
        sum = 0;
        // calculate sum for all window
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        // store maximum result
        maximum = max(maximum, sum);
    }

    cout << maximum << endl;

    return 0;
}