#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int second_largest = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > largest){
                second_largest = largest;
                largest = nums[i];
            }else if(nums[i]<largest && nums[i] > second_largest){
                second_largest = nums[i];
            };
        };
        return second_largest == INT_MIN ? -1 : second_largest;
    };
};

int main() {
    
    return 0;
}