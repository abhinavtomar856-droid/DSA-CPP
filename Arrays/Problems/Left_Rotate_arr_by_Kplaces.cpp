#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int temp[k];

        //Add Starting Elements
        for(int i=0;i<k;i++){
            temp[i] = nums[i];
        };

        //Shifting Loop
        for(int i=k;i<n;i++){
            nums[i-k] = nums[i];
        };

        //Add starting Elements at last
        for(int i=n-k;i<n;i++){
            nums[i] = temp[i-(n-k)];
        };
    };
};

int main() {
    
    return 0;
}