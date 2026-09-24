#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max = nums[0];
        for(int i=0;i<nums.size();i++){
            if(max < nums[i]){
                max = nums[i];         
            };
        };
        return max;
    };
};

int main() {
    return 0;
}