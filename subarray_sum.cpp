// Brute force algorithm
// Time complexity: O(n*k)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum, maximum = INT_MIN;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];
        
    cin >> k;

    for (int i = 0; i <= n - k; i++) {
        sum = 0;
        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maximum = max(maximum, sum);
    }

    cout << maximum << endl;

    return 0;
}