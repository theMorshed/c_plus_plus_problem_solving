// link: https://codeforces.com/contest/1841/problem/B
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    string ans = "1";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool indicatorFound = false;
    int lowerIndicator, lastIndicator = a[0], upperIndicator = a[0];

    for (int i = 1; i < n; i++)
    {
        if (indicatorFound)
        {
            if (a[i] >= lowerIndicator and a[i] <= upperIndicator)
            {
                lowerIndicator = a[i];
                ans += "1";
            }
            else
                ans += "0";
        }
        else
        {
            if (a[i] >= a[i - 1] and a[i] >= lastIndicator)
                ans += "1";
            else if (a[i] < a[i - 1] and a[i] <= upperIndicator)
            {
                ans += "1";
                lowerIndicator = a[i];
                indicatorFound = true;
            }
            else
            {
                ans += "0";
                lastIndicator = max(lastIndicator, a[i - 1]);
            }
        }
    }

    cout << ans << endl;
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