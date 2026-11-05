#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
    int n = nums.size();
    int maxi = *max_element(nums.begin(),nums.end());
        for(float i=1.0;i<=maxi;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum = sum + ceil(nums[j]/i);
            }
            if(sum <= limit){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    
    return 0;
}