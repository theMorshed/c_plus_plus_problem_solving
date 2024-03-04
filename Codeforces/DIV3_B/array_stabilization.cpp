// Link:https://codeforces.com/contest/1095/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int res = min((arr[n - 1] - arr[1]), (arr[n - 2] - arr[0]));

    cout << res << endl;

    return 0;
}