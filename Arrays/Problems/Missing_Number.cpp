#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumN = 0;
        //Sum of N natural numbers
        sumN = (n*(n+1))/2;
       
        //Sum of arr elements
        int sum_arr = 0;
        for(int i=0;i<n;i++){
            sum_arr = sum_arr + nums[i];
        };

        int missingNumber = sumN - sum_arr;
        return missingNumber;
    };
};

int main() {
    
    return 0;
}