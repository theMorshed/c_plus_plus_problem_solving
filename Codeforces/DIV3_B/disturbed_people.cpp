// Link: https://codeforces.com/contest/1077/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> flat(n);

    for (int i = 0; i < n; i++)
        cin >> flat[i];

    for (int i = 1; i < n - 1; i++)
    {
        if (flat[i] == 0 and flat[i - 1] == 1 and flat[i + 1] == 1)
        {
            flat[i + 1] = 0;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}