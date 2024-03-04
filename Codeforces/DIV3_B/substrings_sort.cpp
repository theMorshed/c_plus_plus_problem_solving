// Link: https://codeforces.com/problemset/problem/988/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> strs(n);

    for (int i = 0; i < n; i++)
        cin >> strs[i];

    sort(strs.begin(), strs.end(), [&](string a, string b)
         { return a.size() < b.size(); });

    bool found = true;
    for (int i = 0; i < n - 1; i++)
    {
        string s = strs[i + 1];
        if (s.find(strs[i]) == -1)
        {
            found = false;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
        for (string s : strs)
            cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}