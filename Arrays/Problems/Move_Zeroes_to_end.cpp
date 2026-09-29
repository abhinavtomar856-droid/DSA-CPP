#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_zero = 0;
        int n = nums.size();

        //Count Zero Elements
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                count_zero++;
            };
        };

        vector<int> temp;
        //Add non-zero elements to the temp vector
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            };
        };

        //Adding zero elements to the last of the arr
        for(int i=1;i<=count_zero;i++){
            nums[n-i] = 0;
        };

        //Add non-zero elements to the first from temp
        for(int i=0;i<n-count_zero;i++){
            nums[i] = temp[i];
        };
    }
};

int main() {
    
    return 0;
}