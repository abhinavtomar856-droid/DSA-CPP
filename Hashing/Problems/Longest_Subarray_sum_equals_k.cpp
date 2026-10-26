#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int l = 0;
        int r = 0;
        int sum = 0;
        int max_len = 0;
        while(r<n){
            sum = sum + nums[r];
            while(sum < k){
                r = r + 1;
                sum = sum + nums[r];
            }
            if(sum > k){
                sum = sum - nums[l];
                l = l + 1;
            }
            if(sum == k){
                max_len = max(max_len,r-l+1);
            }
            r++;
        }
        return max_len;
    };
};

int main() {
    
    return 0;
}