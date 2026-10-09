#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //outer loop
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                };
                if(count > n/2){
                    return nums[j];
                };
            };
        };
    };
};

int main() {
    
    return 0;
}