// Link: https://codeforces.com/contest/32/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> str;
    n = str.size();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '-')
        {
            if (str[i + 1] == '.')
            {
                cout << 1;
                i++;
            }
            else if (str[i] == '-')
            {
                cout << 2;
                i++;
            }
        }
        else if (str[i] == '.')
            cout << 0;
    }

    cout << endl;

    return 0;
}