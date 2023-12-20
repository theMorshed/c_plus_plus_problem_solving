#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    long long sum = arr[0];
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        sum += arr[i];
        arr[i] = sum;
    }

    // Display the prefix sum array
    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}
