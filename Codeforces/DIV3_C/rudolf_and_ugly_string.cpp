// Link: https://codeforces.com/contest/1941/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p') or (s[i] == 'p' and s[i + 1] == 'i' and s[i + 2] == 'e'))
            {
                cnt++;
                i += 2;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}