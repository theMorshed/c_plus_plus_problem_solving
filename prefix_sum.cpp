#include <bits/stdc++.h>
using namespace std;

vector<int> calculatePrefixSum(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixSum(n, 0);

    prefixSum[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> prefixSum = calculatePrefixSum(arr);

    // Display the prefix sum array
    for (int element : prefixSum)
    {
        cout << element << " ";
    }

    return 0;
}
