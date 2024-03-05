// Link:https://codeforces.com/contest/1923/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cells(n);
        for (int i = 0; i < n; i++)
            cin >> cells[i];
        int res = 0, start = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cells[i] == 1 and start == 0)
            {
                start = 1;
                continue;
            }
            if (cells[i] == 0 and start == 1)
            {
                cnt++;
            }
            else if (cells[i] == 1 and start == 1)
            {
                res += cnt;
                cnt = 0;
            }
        }

        cout << res << endl;
    }

    return 0;
}