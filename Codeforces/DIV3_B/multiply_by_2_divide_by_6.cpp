// Link: https://codeforces.com/contest/1374/problem/B
#include <iostream>
using namespace std;

int main()
{
    int n, t, cnt;
    cin >> t;

    while (t--)
    {
        cnt = 0;
        cin >> n;
        while (n > 1)
        {
            cnt++;
            if (n % 6 == 0)
            {
                n /= 6;
            }
            else
                n *= 2;
        }
        if (n == 1)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}