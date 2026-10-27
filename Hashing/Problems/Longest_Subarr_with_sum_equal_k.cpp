#include <bits/stdc++.h>
using namespace std;

//only for postive numbers and zero
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int l = 0;
        int r = 0;
        int sum = nums[0];
        int max_len = 0;
        while(r<n){
            while(l<=r &&  sum > k){
                sum = sum - nums[l];
                l++;
            }
            if(sum == k){
                max_len = max(max_len,r-l+1);
            }
            r++;
            if(r<n){
                sum = sum + nums[r];
            }
        }
        return max_len;
    };
};

int main() {
    
    return 0;
}