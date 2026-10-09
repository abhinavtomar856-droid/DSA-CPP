#include <bits/stdc++.h>
using namespace std;

//Brute Force solution
//Time complexity exceed
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //outer loop
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=i;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                };
                if(count > n/2){
                    return nums[i];
                };
            };
        };
    };
};

int main() {
    
    return 0;
}