#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0, maximum = INT_MIN;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;
    int i = 0, j = 0;

    while(j < n) {
        sum += arr[j];

        if (j < k - 1) {
            j++;
        }
        else {
            maximum = max(maximum, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }

    cout << maximum << endl;

    return 0;
}