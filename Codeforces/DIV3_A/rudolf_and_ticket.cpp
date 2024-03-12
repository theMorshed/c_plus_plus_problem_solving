// Link:https://codeforces.com/contest/1941/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, cnt = 0;
        cin >> n >> m >> k;
        vector<int> left(n);
        vector<int> right(m);

        for (int i = 0; i < n; i++)
            cin >> left[i];
        for (int i = 0; i < m; i++)
            cin >> right[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (left[i] + right[j] <= k)
                    cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}