#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 2, 5, 2, 3, 7};
    int target = 10;

    int n = nums.size();
    int currentSum = 0, ans = INT_MAX;
    int i = 0, j = 0;

    while(j < n) {
        currentSum += nums[j];

        if (currentSum > target) {
            while (currentSum > target) {
                currentSum -= nums[i];
                i++;
            }
        }

        if (currentSum == target) {
            ans = min(ans, j - i + 1);
        }

        j++;
    }

    cout << ans << endl;

    return 0;
}