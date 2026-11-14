#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach.
//Time complexity = O(n*m) + O(n8m log(n*m));
//Space complexity = O(1).

class Solution{
public:
    int findMedian(vector<vector<int>>&matrix) {
        int n = matrix.size();
        int m = matrix[1].size();
        vector<int> nums;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nums.push_back(matrix[i][j]);
            }
        }
        sort(nums.begin(),nums.end());
        return nums[(n*m)/2];
    };
};

int main() {
    
    return 0;
}