#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = INT_MIN;

    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (sum == 0) {
            start = i;
        }

        sum = sum + nums[i];

        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    // Print the subarray
    cout << "Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return maxi;
}

int main() {
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int a = maxSubArray(nums);
    cout << "Maximum sum: " << a << endl;
    return 0;
}