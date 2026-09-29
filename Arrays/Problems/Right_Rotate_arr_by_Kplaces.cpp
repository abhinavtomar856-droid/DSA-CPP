#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int temp[k];
        //Adding last elements 
        for(int i=n-k;i<n;i++){
            temp[i-(n-k)] = nums[i];
        };

        //Shifting right
        for(int i=(n-k)-1;i>=0;i--){
            nums[k+i] = nums[i];
        };

        //Value add at the starting
        for(int i=0;i<k;i++){
            nums[i] = temp[i];
        };
    };
};

//Optimal Solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    };
};

int main() {
    
    return 0;
}