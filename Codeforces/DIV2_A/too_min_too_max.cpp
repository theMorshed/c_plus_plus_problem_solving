// Link: https://codeforces.com/contest/1934/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int first = abs(arr[0] - arr[n - 1]);
        int second = abs(arr[n - 1] - arr[1]);
        int third = abs(arr[1] - arr[n - 2]);
        int fourth = abs(arr[n - 2] - arr[0]);
        sum = first + second + third + fourth;
        cout << sum << endl;
    }

    return 0;
}