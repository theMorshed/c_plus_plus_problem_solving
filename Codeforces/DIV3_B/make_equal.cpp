// Link: https://codeforces.com/contest/1931/problem/B
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n, required;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    required = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < required or (i == n - 1 and a[i] != required))
        {
            cout << "NO" << endl;
            return;
        }
        else if (a[i] > required and i != n - 1)
        {
            int tmp = a[i] - required;
            a[i + 1] += tmp;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }

    return 0;
}