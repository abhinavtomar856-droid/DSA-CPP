// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.

// Example 1:
// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]

// Output: 3

// Explanation:
// The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s

// Example 2:
// Input: nums = [0, 0, 0, 0, 0, 0, 0, 0]

// Output: 0

// Explanation:
// No 1s are present in nums, thus we return 0

// Example 3:
// Input: nums = [1, 0, 1, 1, 1, 0, 1, 1, 1]

// Output:
// 3

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int max = 0;
       int count_1 = 0;
       for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            count_1++;
        }
        else if(nums[i] == 0){
            count_1 = 0;
        }
        if(count_1>max){
        max = count_1;
       }
    }
       return max;
    };
};

int main() {
    
    return 0;
}