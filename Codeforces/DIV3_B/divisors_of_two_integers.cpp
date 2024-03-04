// Link: https://codeforces.com/contest/1108/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> divisors(n);

    for (int i = 0; i < n; i++)
        cin >> divisors[i];
    sort(divisors.begin(), divisors.end());

    int len = divisors.size();
    cout << divisors[len - 1] << " ";

    for (int i = len - 1; i >= 1; i--)
    {
        if (divisors[len - 1] % divisors[i] != 0 or divisors[i] == divisors[i - 1])
        {
            cout << divisors[i] << endl;
            break;
        }
    }

    return 0;
}